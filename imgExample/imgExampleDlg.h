﻿
// imgExampleDlg.h: 헤더 파일
//

#pragma once


// CimgExampleDlg 대화 상자
class CimgExampleDlg : public CDialogEx
{
// 생성입니다.
public:
	CimgExampleDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IMGEXAMPLE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;
	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	// 테스트 버튼
	CBitmapButton m_button;
	CBitmapButton m_button2;
	
protected:
	CString m_change_static;
};
