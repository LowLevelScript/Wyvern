#ifndef WYVERN_H
#define WYVERN_H

#include <iostream>
#include <fstream>
#include <string>
#include <atomic>
#include <functional>
#include <memory>

// simdjson
// #include <simdjson.h>

// llvm
#include <llvm-7/llvm/ADT/STLExtras.h>

// W: enums
#include "Wyvern/Lexer/Token.h"

//
#include "Wyvern/Atom.h"
#include "Wyvern/Utilities/Event.h"

//
#include "Wyvern/FS/SourceFile.h"
#include "Wyvern/Lexer/Lexer.h"

#endif //!WYVERN_H