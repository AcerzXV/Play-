#ifndef _OPTIONWINDOW_H_
#define _OPTIONWINDOW_H_

#include "win32/Window.h"
#include "win32/TreeView.h"
#include "win32/Static.h"
#include "HorizontalLayout.h"

template <typename T> class COptionWnd : public T
{
public:
									COptionWnd(HWND, const TCHAR*);
									~COptionWnd();

protected:
	long							OnNotify(WPARAM, NMHDR*);
	long							OnSize(unsigned int, unsigned int, unsigned int);

    Framework::Win32::CWindow*		GetContainer();
	Framework::Win32::CTreeView*	GetTreeView();
	HTREEITEM						InsertOption(HTREEITEM, const TCHAR*, HWND);
	void							DeleteAllOptions();
	void							RefreshLayout();
	void							UpdatePanel(TVITEM*, TVITEM*);

private:
	void							ResizePanel(HWND);
	Framework::Win32::CTreeView*	m_pTreeView;
	Framework::Win32::CStatic*		m_pContainer;
	Framework::CHorizontalLayout*	m_pLayout;


};

#endif
