// TestView3.cpp: 구현 파일
//

#include "pch.h"
#include "MFCSplitTest.h"
#include "TestView3.h"


// TestView3

IMPLEMENT_DYNCREATE(TestView3, CView)

TestView3::TestView3()
{

}

TestView3::~TestView3()
{
}

BEGIN_MESSAGE_MAP(TestView3, CView)
END_MESSAGE_MAP()


// TestView3 그리기

void TestView3::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: 여기에 그리기 코드를 추가합니다.
}


// TestView3 진단

#ifdef _DEBUG
void TestView3::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void TestView3::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// TestView3 메시지 처리기
