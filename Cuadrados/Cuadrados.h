#pragma once  //______________________________________ Cuadrados.h  
#include "Resource.h"
class Cuadrados: public Win::Dialog
{
public:
	Cuadrados()
	{
	}
	~Cuadrados()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbx1;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(8.09625);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(6.61458);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Cuadrados";
		tbx1.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_MULTILINE | ES_LEFT | ES_WINNORMALCASE, 1.64042, 0.71437, 6.27062, 5.71500, hWnd, 1000);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbx1.Font = fontArial009A;
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
