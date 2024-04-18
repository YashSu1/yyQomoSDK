// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "qclick.h"

/////////////////////////////////////////////////////////////////////////////
// CQClick

IMPLEMENT_DYNCREATE(CQClick, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CQClick properties

/////////////////////////////////////////////////////////////////////////////
// CQClick operations

BOOL CQClick::InitHost()
{
	BOOL result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString CQClick::GetHostInfo(long lFlag)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		lFlag);
	return result;
}

long CQClick::SetHostChannel(short nChannelNo)
{
	long result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		nChannelNo);
	return result;
}

long CQClick::StartSession(LPCTSTR pClassName, LPCTSTR pTeacherName, long lMaxStudents, short nSessionType, BOOL bLoginFlag, BOOL bAutoLoginFlag)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4 VTS_I2 VTS_BOOL VTS_BOOL;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		pClassName, pTeacherName, lMaxStudents, nSessionType, bLoginFlag, bAutoLoginFlag);
	return result;
}

long CQClick::StartQuestion(short nQuestionNo, short nQuestionType, short nNumberOfOption, BOOL bIsSendQuestion, LPCTSTR pQuestionInfo, LPCTSTR pCorrectAnswer, short nQuestionSessionType, short nReanswerTimes)
{
	long result;
	static BYTE parms[] =
		VTS_I2 VTS_I2 VTS_I2 VTS_BOOL VTS_BSTR VTS_BSTR VTS_I2 VTS_I2;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		nQuestionNo, nQuestionType, nNumberOfOption, bIsSendQuestion, pQuestionInfo, pCorrectAnswer, nQuestionSessionType, nReanswerTimes);
	return result;
}

long CQClick::StopQuestion()
{
	long result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CQClick::StopSession()
{
	long result;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL CQClick::AllowLogin(LPCTSTR pStudentID, BOOL bAllowLogin, BOOL bIsSendStudentName, LPCTSTR pStudentName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR VTS_BOOL;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pStudentID, bAllowLogin, bIsSendStudentName, pStudentName);
	return result;
}

BOOL CQClick::CloseHost()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CQClick::SetKeypadNO(long lKeypadNO)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		lKeypadNO);
	return result;
}

long CQClick::HomeworkSetExamTitle(short nExamID, LPCTSTR pExamTitle, short nQuestionNum)
{
	long result;
	static BYTE parms[] =
		VTS_I2 VTS_BSTR VTS_I2;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		nExamID, pExamTitle, nQuestionNum);
	return result;
}

long CQClick::HomeworkSetQuestionInfo(short nQuestionNo, short nQuestionType, LPCTSTR pQuestionInfo, LPCTSTR pAnswer)
{
	long result;
	static BYTE parms[] =
		VTS_I2 VTS_I2 VTS_BSTR VTS_BSTR;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		nQuestionNo, nQuestionType, pQuestionInfo, pAnswer);
	return result;
}

CString CQClick::GetStudentAnswer(LPCTSTR pStudentID, short nQuestionNo)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_I2;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		pStudentID, nQuestionNo);
	return result;
}

long CQClick::HomeworkSendExamInfo()
{
	long result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

void CQClick::AboutBox()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
