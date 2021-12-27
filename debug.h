//
//  debug.h
//  clox
//
//  Created by ahabhgk on 2021/12/27.
//

#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif /* clox_debug_h */
