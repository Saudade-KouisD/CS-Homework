#pragma once


// ShowLEX 对话框

class ShowLEX : public CDialogEx
{
	DECLARE_DYNAMIC(ShowLEX)

public:
	ShowLEX(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~ShowLEX();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedSaveProgram();
	CString text;
	void setText(CString s)
	{
		text = s;
	}
	// 显示生成程序
	CEdit show;
};
