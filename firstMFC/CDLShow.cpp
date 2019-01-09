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
}


BEGIN_MESSAGE_MAP(CDLShow, CDialogEx)
END_MESSAGE_MAP()


// CDLShow 消息处理程序
