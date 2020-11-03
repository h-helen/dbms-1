#pragma once



// CTreeview 窗体视图

class CTreeview : public CFormView
{
	DECLARE_DYNCREATE(CTreeview)

protected:
	CTreeview();           // 动态创建所使用的受保护的构造函数
	virtual ~CTreeview();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};


