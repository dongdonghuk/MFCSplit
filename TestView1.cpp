// TestView1.cpp: 구현 파일
//

#include "pch.h"
#include "MFCSplitTest.h"
#include "TestView1.h"


// TestView1

IMPLEMENT_DYNCREATE(TestView1, CView)

TestView1::TestView1()
{

}

TestView1::~TestView1()
{
}

BEGIN_MESSAGE_MAP(TestView1, CView)
END_MESSAGE_MAP()


// TestView1 그리기

void TestView1::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: 여기에 그리기 코드를 추가합니다.
}


// TestView1 진단

#ifdef _DEBUG
void TestView1::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void TestView1::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// TestView1 메시지 처리기
