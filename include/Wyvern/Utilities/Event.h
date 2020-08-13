// Copyright 2020 Matt Jones and Contributors.
// File based on https://github.com/novelrt/NovelRT

#ifndef WYVERN_UTILITIES_EVENT_H
#define WYVERN_UTILITIES_EVENT_H

#ifndef WYVERN_H
#error Please do not include this directly. Use the centralised header (Wyvern.h) instead!
#endif

namespace Wyvern::Utilities {

    template<typename... TArgs>
    class EventHandler {
    private:
        Atom Id;
        std::function<void(TArgs...)> Function;

    public:
        EventHandler() : EventHandler(nullptr) {
        }

        explicit EventHandler(const std::function<void(TArgs...)>& ScopedFunction) :
                Id((ScopedFunction != nullptr) ? Atom::getNextEventHandlerId() : Atom()),
                Function(ScopedFunction) {
        }

        void operator()(TArgs... Args) const {
            Function(std::forward<TArgs>(Args)...);
        }

        Atom getId() const {
            return Id;
        }

        bool operator==(const EventHandler<TArgs...>& Other) const {
            return Id == Other.Id;
        }

        bool operator!=(const EventHandler<TArgs...>& Other) const {
            return Id != Other.Id;
        }
    };

    template<typename... TArgs>
    class Event {
    private:
        std::vector<EventHandler<TArgs...>> Handlers;

    public:
        Event() : Handlers(std::vector<EventHandler<TArgs...>>()) {
        }

        [[maybe_unused]] size_t getHandlerCount() const {
            return Handlers.size();
        }

        void operator+=(const EventHandler<TArgs...>& Handler) {
            if (Handler.getId() != Atom()) {
                Handlers.emplace_back(Handler);
            }
        }

        void operator+=(const std::function<void(TArgs...)>& Function) {
            auto Handler = EventHandler<TArgs...>(Function);
            *this += Handler;
        }

        void operator-=(const EventHandler<TArgs...>& Handler) {
            if (Handler.getId() == Atom())
                return;

            auto Match = std::find(Handlers.cbegin(), Handlers.cend(), Handler);

            if (Match != Handlers.cend())
                Handlers.erase(Match);
        }

        void operator()(TArgs... Args) const {
            auto ScopedHandlers = Handlers;

            for (auto ScopedHandler : ScopedHandlers) {
                ScopedHandler(Args...);
            }
        }
    };

} // namespace Wyvern::Utilities

#endif //WYVERN_UTILITIES_EVENT_H
