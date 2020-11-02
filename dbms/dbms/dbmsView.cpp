
// dbmsView.cpp: CdbmsView 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "dbms.h"
#endif

#include "dbmsDoc.h"
#include "dbmsView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CdbmsView

IMPLEMENT_DYNCREATE(CdbmsView, CView)

BEGIN_MESSAGE_MAP(CdbmsView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CdbmsView 构造/析构

CdbmsView::CdbmsView() noexcept
{
	// TODO: 在此处添加构造代码

}

CdbmsView::~CdbmsView()
{
}

BOOL CdbmsView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CdbmsView 绘图

void CdbmsView::OnDraw(CDC* /*pDC*/)
{
	CdbmsDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CdbmsView 打印

BOOL CdbmsView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CdbmsView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CdbmsView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CdbmsView 诊断

#ifdef _DEBUG
void CdbmsView::AssertValid() const
{
	CView::AssertValid();
}

void CdbmsView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CdbmsDoc* CdbmsView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CdbmsDoc)));
	return (CdbmsDoc*)m_pDocument;
}
#endif //_DEBUG


// CdbmsView 消息处理程序
