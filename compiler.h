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

ObjFunction* compile(const char* source);
void markCompilerRoots();

#endif /* clox_compiler_h */
