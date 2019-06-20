
// MFCPlayerDlg.h: 头文件
//

#pragma once


// CMFCPlayerDlg 对话框
class CMFCPlayerDlg : public CDialogEx
{
// 构造
public:
	CMFCPlayerDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCPLAYER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedFilebrowser();
	afx_msg void OnBnClickedPlay();
	afx_msg void OnBnClickedPause();
	afx_msg void OnBnClickedStop();
	afx_msg void OnBnClickedAbout();
	afx_msg void OnStnClickedScreen();
	CEdit m_url;
	CRect m_wndRect;
	CWinThread *pThreadPlay;
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
