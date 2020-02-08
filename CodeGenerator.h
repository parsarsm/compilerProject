// CodeGenerator.h: interface for the CodeGenerator class.
//
//////////////////////////////////////////////////////////////////////

//#if !defined(AFX_ODEGENERATOR_H__580AD3AE_2D1B_444A_BCCE_5A6252CA0DF0__INCLUDED_)
//#define AFX_ODEGENERATOR_H__580AD3AE_2D1B_444A_BCCE_5A6252CA0DF0__INCLUDED_
//
//#if _MSC_VER > 1000
//#pragma once
//#endif // _MSC_VER > 1000
#ifndef CODEGENERATOR_H
#define CODEGENERATOR_H
#include <string>
#include "Scanner.h"
#include "stack"
using namespace std;

class CodeGenerator  
{
public:
	stack<string> sstack;
	string code[100000];
	int pc;
   	void Generate(string sem);
	CodeGenerator();
	virtual ~CodeGenerator();

};

#endif // !defined(AFX_ODEGENERATOR_H__580AD3AE_2D1B_444A_BCCE_5A6252CA0DF0__INCLUDED_)
