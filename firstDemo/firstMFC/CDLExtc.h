#pragma once


// CDLExtc 对话框

class CDLExtc : public CDialogEx
{
	DECLARE_DYNAMIC(CDLExtc)

public:
	CDLExtc(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDLExtc();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FIRSTMFC_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
