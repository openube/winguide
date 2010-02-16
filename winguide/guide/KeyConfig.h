#pragma once
#include "afxwin.h"
#include "CommandManager.h"
#include "KeyComboEdit.h"

// KeyConfig dialog

class KeyConfig : public CDialog
{
	DECLARE_DYNAMIC(KeyConfig)

public:
	KeyConfig(CWnd* pParent = NULL);   // standard constructor
	virtual ~KeyConfig();

// Dialog Data
	enum { IDD = IDD_KEY_CONFIG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
	
protected:
	CListBox m_availableCommands;
	CEdit m_txtCurrentKeyAssignment;
	CKeyComboEdit m_txtDesiredKeyCombo;
	CButton m_btnAssign;
	afx_msg void OnBnClickedButton1();
	CommandManager *_cmdManager;
	CComboBox m_cmbContext;
	DWORD _ctxCookie;

	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedBtnAssign();
	afx_msg void OnLbnSelchangeList1();
public:
	afx_msg void OnCbnSelchangeComboContext();
};
