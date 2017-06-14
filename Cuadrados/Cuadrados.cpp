#include "stdafx.h"  //________________________________________ Cuadrados.cpp
#include "Cuadrados.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Cuadrados app;
	return app.BeginDialog(IDI_Cuadrados, hInstance);
}

void Cuadrados::Window_Open(Win::Event& e)
{
	for (int i = 0; i < 12; i++)
	{
		if ((i % 2) != 0)
		{
			wstring salida = L"The squared of ";
			salida += Sys::Convert::ToString(i);
			salida += L" is ";
			salida += Sys::Convert::ToString(i*i);
			salida += L"\r\n";
			tbx1.Text += salida;
		}
	}
}

