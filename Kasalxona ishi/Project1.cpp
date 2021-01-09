//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", Form1);
USEFORM("Unit4.cpp", Form4);
USEFORM("Unit3.cpp", Form_Bolim_boshligi_uchun_Bemorlar);
USEFORM("Unit11.cpp", Form_Word_uchun);
USEFORM("Unit8.cpp", Form_Shifokorlar_bolim_boshligi_uchun);
USEFORM("Unit13.cpp", Form_Shifokorlar_haqida);
USEFORM("Unit17.cpp", Dasturga_yordam);
USEFORM("Unit7.cpp", Form_Bemorlar);
USEFORM("Unit12.cpp", Shikorlar_Login_va_Parol);
USEFORM("Unit20.cpp", Form_Bemorlar_Shifoxona_boshligi_uchun);
USEFORM("Unit6.cpp", Form_Shifokor);
USEFORM("Unit9.cpp", Form_Malumotqoshish);
USEFORM("Unit16.cpp", Shifokorlar_haqida_malumot_toldirish);
USEFORM("Unit5.cpp", Form_Bolim_boshliqlari);
USEFORM("Unit10.cpp", Labaratoriya_ishi);
//---------------------------------------------------------------------------
WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm_Bemorlar), &Form_Bemorlar);
		Application->CreateForm(__classid(TForm_Shifokor), &Form_Shifokor);
		Application->CreateForm(__classid(TForm_Malumotqoshish), &Form_Malumotqoshish);
		Application->CreateForm(__classid(TShikorlar_Login_va_Parol), &Shikorlar_Login_va_Parol);
		Application->CreateForm(__classid(TForm_Shifokorlar_haqida), &Form_Shifokorlar_haqida);
		Application->CreateForm(__classid(TShifokorlar_haqida_malumot_toldirish), &Shifokorlar_haqida_malumot_toldirish);
		Application->CreateForm(__classid(TDasturga_yordam), &Dasturga_yordam);
		Application->CreateForm(__classid(TForm4), &Form4);
		Application->CreateForm(__classid(TForm_Word_uchun), &Form_Word_uchun);
		Application->CreateForm(__classid(TForm_Bolim_boshligi_uchun_Bemorlar), &Form_Bolim_boshligi_uchun_Bemorlar);
		Application->CreateForm(__classid(TForm_Bemorlar_Shifoxona_boshligi_uchun), &Form_Bemorlar_Shifoxona_boshligi_uchun);
		Application->CreateForm(__classid(TForm_Bolim_boshliqlari), &Form_Bolim_boshliqlari);
		Application->CreateForm(__classid(TForm_Shifokorlar_bolim_boshligi_uchun), &Form_Shifokorlar_bolim_boshligi_uchun);
		Application->CreateForm(__classid(TLabaratoriya_ishi), &Labaratoriya_ishi);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
