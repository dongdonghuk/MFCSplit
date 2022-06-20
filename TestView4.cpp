// TestView4.cpp: 구현 파일
//

#include "pch.h"
#include "MFCSplitTest.h"
#include "TestView4.h"


// TestView4

IMPLEMENT_DYNCREATE(TestView4, CView)

TestView4::TestView4()
{

}

TestView4::~TestView4()
{
}

BEGIN_MESSAGE_MAP(TestView4, CView)
END_MESSAGE_MAP()


// TestView4 그리기

void TestView4::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: 여기에 그리기 코드를 추가합니다.
}


// TestView4 진단

#ifdef _DEBUG
void TestView4::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void TestView4::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// TestView4 메시지 처리기
