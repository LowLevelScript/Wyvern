#ifndef WYVERN_H
#define WYVERN_H

#include <iostream>
#include <fstream>
#include <string>

// simdjson
#include <simdjson.h>

// llvm
#include <llvm/ADT/STLExtras.h>

// W: enums
#include "Wyvern/Lexer/Token.h"

//
#include "Wyvern/Atom.h"
#include "Wyvern/Utilities/Event.h"

//
#include "Wyvern/FS/SourceFile.h"
#include "Wyvern/Lexer/Lexer.h"

#endif //!WYVERN_H