//***************************************************************************** 
//
// This file is part of the OpenHoldem project
//   Download page:         http://code.google.com/p/openholdembot/
//   Forums:                http://www.maxinmontreal.com/forums/index.php
//   Licensed under GPL v3: http://www.gnu.org/licenses/gpl.html
//
//***************************************************************************** 
//
// Purpose:
//
//***************************************************************************** 

#ifndef INC_CFORMULAFILESPLITTER_H
#define INC_CFORMULAFILESPLITTER_H

#define _AFXDLL 

#include "afx.h"
#include "atlstr.h"

class CFormulaFileSplitter
{
public:
	CFormulaFileSplitter();
	~CFormulaFileSplitter();
public:
	CString GetNextFunctionOrList(CArchive &formula_file);
private:
	bool IsFunctionHeader(CString line_of_code);
private:
	CString _next_formula_content;
	CString _next_line;
};

#endif INC_CFORMULAFILESPLITTER_H