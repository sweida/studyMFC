#pragma once


// CDLEtec 对话框

class CDLEtec : public CDialogEx
{
	DECLARE_DYNAMIC(CDLEtec)

public:
	CDLEtec(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDLEtec();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ETEC };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
