// CDLEtec.cpp: 实现文件
//

#include "stdafx.h"
#include "firstMFC.h"
#include "CDLEtec.h"
#include "afxdialogex.h"


// CDLEtec 对话框

IMPLEMENT_DYNAMIC(CDLEtec, CDialogEx)

CDLEtec::CDLEtec(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ETEC, pParent)
{

}

CDLEtec::~CDLEtec()
{
}

void CDLEtec::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDLEtec, CDialogEx)
END_MESSAGE_MAP()


// CDLEtec 消息处理程序
