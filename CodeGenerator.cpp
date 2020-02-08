// odeGenerator.cpp: implementation of the CodeGenerator class.
//
//////////////////////////////////////////////////////////////////////

#include "CodeGenerator.h"
#include <iostream>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CodeGenerator::CodeGenerator() {

}

CodeGenerator::~CodeGenerator() {

}

void CodeGenerator::Generate(string sem) {
    if (sem != "NoSem") {
        if (sem == "@push") {
            cout << Scanner::text;
            sstack.push(Scanner::text);
        }
    }
}
