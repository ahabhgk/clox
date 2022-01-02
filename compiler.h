//
//  compiler.h
//  clox
//
//  Created by ahabhgk on 2021/12/27.
//

#ifndef clox_compiler_h
#define clox_compiler_h

#include "object.h"
#include "vm.h"

bool compile(const char* source, Chunk* chunk);

#endif /* clox_compiler_h */
