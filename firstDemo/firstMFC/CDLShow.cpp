// CDLShow.cpp: 实现文件
//

#include "stdafx.h"
#include "firstMFC.h"
#include "CDLShow.h"
#include "afxdialogex.h"


// CDLShow 对话框

IMPLEMENT_DYNAMIC(CDLShow, CDialogEx)

CDLShow::CDLShow(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SHOW, pParent)
{

}

CDLShow::~CDLShow()
{
}

void CDLShow::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_DLGTEXT, m_dlgtext);
}


BEGIN_MESSAGE_MAP(CDLShow, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDLShow::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CDLShow::OnBnClickedButton2)
END_MESSAGE_MAP()


// CDLShow 消息处理程序

// 修改文字
void CDLShow::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	m_dlgtext.SetWindowTextW(TEXT("就你皮"));
}

// 点击弹出文字
void CDLShow::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str;
	m_dlgtext.GetWindowTextW(str);
	MessageBox(str);
}
