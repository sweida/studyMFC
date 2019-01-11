// CDLExtc.cpp: 实现文件
//

#include "stdafx.h"
#include "firstMFC.h"
#include "CDLExtc.h"
#include "afxdialogex.h"


// CDLExtc 对话框

IMPLEMENT_DYNAMIC(CDLExtc, CDialogEx)

CDLExtc::CDLExtc(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_FIRSTMFC_DIALOG, pParent)
{

}

CDLExtc::~CDLExtc()
{
}

void CDLExtc::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDLExtc, CDialogEx)
END_MESSAGE_MAP()


// CDLExtc 消息处理程序
