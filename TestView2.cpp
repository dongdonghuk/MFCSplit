// TestView2.cpp: 구현 파일
//

#include "pch.h"
#include "MFCSplitTest.h"
#include "TestView2.h"


// TestView2

IMPLEMENT_DYNCREATE(TestView2, CView)

TestView2::TestView2()
{

}

TestView2::~TestView2()
{
}

BEGIN_MESSAGE_MAP(TestView2, CView)
END_MESSAGE_MAP()


// TestView2 그리기

void TestView2::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: 여기에 그리기 코드를 추가합니다.
}


// TestView2 진단

#ifdef _DEBUG
void TestView2::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void TestView2::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// TestView2 메시지 처리기
