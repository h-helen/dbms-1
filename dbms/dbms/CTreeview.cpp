// CTreeview.cpp: 实现文件
//

#include "pch.h"
#include "dbms.h"
#include "CTreeview.h"


// CTreeview

IMPLEMENT_DYNCREATE(CTreeview, CFormView)

CTreeview::CTreeview()
	: CFormView(IDD_DIALOG1)
{

}

CTreeview::~CTreeview()
{
}

void CTreeview::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CTreeview, CFormView)
END_MESSAGE_MAP()


// CTreeview 诊断

#ifdef _DEBUG
void CTreeview::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CTreeview::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CTreeview 消息处理程序
