
// dbmsView.h: CdbmsView 类的接口
//

#pragma once


class CdbmsView : public CView
{
protected: // 仅从序列化创建
	CdbmsView() noexcept;
	DECLARE_DYNCREATE(CdbmsView)

// 特性
public:
	CdbmsDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CdbmsView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // dbmsView.cpp 中的调试版本
inline CdbmsDoc* CdbmsView::GetDocument() const
   { return reinterpret_cast<CdbmsDoc*>(m_pDocument); }
#endif

