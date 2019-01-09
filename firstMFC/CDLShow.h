#pragma once


// CDLShow 对话框

class CDLShow : public CDialogEx
{
	DECLARE_DYNAMIC(CDLShow)

public:
	CDLShow(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDLShow();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SHOW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
