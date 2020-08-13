// Copyright 2020 Matt Jones and Contributors.
// File based on https://github.com/novelrt/NovelRT

#ifndef WYVERN_ATOM_H
#define WYVERN_ATOM_H

#ifndef WYVERN_H
#error Please do not include this directly. Use the centralised header (Wyvern.h) instead!
#endif

namespace Wyvern {
    class Atom {
    private:
        uintptr_t Value;

    public:
        explicit Atom() : Atom(0) { }

        explicit Atom(uintptr_t IdValue) :
                Value(IdValue) { }

        bool operator==(Atom Other) const {
            return Value == Other.Value;
        }

        bool operator!=(Atom Other) const {
            return Value != Other.Value;
        }

        bool operator<(Atom Other) const {
            return Value < Other.Value;
        }

        bool operator<=(Atom Other) const {
            return Value <= Other.Value;
        }

        bool operator>(Atom Other) const {
            return Value > Other.Value;
        }

        bool operator>=(Atom Other) const {
            return Value >= Other.Value;
        }

        static Atom getNextEventHandlerId() {
            static std::atomic_uintptr_t NextEventHandlerId(0);
            auto IdValue = ++NextEventHandlerId;
            return Atom(IdValue);
        }
    };
} // namespace Wyvern

#endif // WYVERN_ATOM_H