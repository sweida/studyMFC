// DlgLogin.cpp: 实现文件
//

#include "stdafx.h"
#include "SaleSystem.h"
#include "DlgLogin.h"
#include "afxdialogex.h"


// DlgLogin 对话框

IMPLEMENT_DYNAMIC(DlgLogin, CDialogEx)

DlgLogin::DlgLogin(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DlgLogin, pParent)
	, m_user(_T(""))
	, m_pwd(_T(""))
{

}

DlgLogin::~DlgLogin()
{
}

void DlgLogin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_user);
	DDX_Text(pDX, IDC_EDIT2, m_pwd);
}


BEGIN_MESSAGE_MAP(DlgLogin, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &DlgLogin::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &DlgLogin::OnBnClickedButton2)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// DlgLogin 消息处理程序


void DlgLogin::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	// 获取最新输入框
	UpdateData(TRUE);

	if (m_user.IsEmpty() || m_pwd.IsEmpty()) {
		MessageBox(TEXT("用户名和密码不用为空"));
		return;
	}
	if (m_user == "admin") {
		if (m_pwd == "123456") {
			DlgLogin:OnCancel();
		}
		else {
			MessageBox(TEXT("密码错误"));
		}
	}
	else {
		MessageBox(TEXT("用户名错误"));
	}
}


void DlgLogin::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	exit(0);
}


void DlgLogin::OnOK()
{
	// TODO: 在此添加专用代码和/或调用基类
	// 修复回车bug
	// CDialogEx::OnOK();
}


void DlgLogin::OnClose()
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	// CDialogEx::OnClose();
	// 修复关闭按钮bug
	exit(0);
}
