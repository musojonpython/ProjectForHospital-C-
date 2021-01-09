//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//#include "Unit3.h"
#include "Unit12.h"
#include "Unit16.h"
#include "Unit13.h"
#include "Unit18.h"
#include "Unit7.h"
#include "Unit14.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
  Shikorlar_Login_va_Parol->Show();
  Shikorlar_Login_va_Parol->Caption = "Shifokor login va parol";
  Shikorlar_Login_va_Parol->RadioButton1->Visible = false;
  Shikorlar_Login_va_Parol->RadioButton2->Visible = false;
  Shikorlar_Login_va_Parol->RadioGroup1->Visible = false;
  Form1->Hide();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SpeedButton1MouseMove(TObject *Sender, TShiftState Shift,
		  int X, int Y)
{
		SpeedButton1->Font->Color = clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1MouseLeave(TObject *Sender)
{
	  SpeedButton1->Font->Color = clBlack;
	  SpeedButton1->Font->Style = TFontStyles();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton2MouseMove(TObject *Sender, TShiftState Shift,
		  int X, int Y)
{
	SpeedButton2->Font->Color = clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton2MouseLeave(TObject *Sender)
{
   SpeedButton2->Font->Color = clBlack;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3MouseMove(TObject *Sender, TShiftState Shift,
		  int X, int Y)
{
	SpeedButton3->Font->Color = clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3MouseLeave(TObject *Sender)
{
  SpeedButton3->Font->Color = clBlack;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton4MouseLeave(TObject *Sender)
{
   SpeedButton4->Font->Color = clBlack;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton4MouseMove(TObject *Sender, TShiftState Shift,
		  int X, int Y)
{
  SpeedButton4->Font->Color = clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton5MouseLeave(TObject *Sender)
{
   SpeedButton5->Font->Color = clBlack;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton5MouseMove(TObject *Sender, TShiftState Shift,
		  int X, int Y)
{
	SpeedButton5->Font->Color = clRed;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton5Click(TObject *Sender)
{
   Form1->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
Shikorlar_Login_va_Parol->Show();
Shikorlar_Login_va_Parol->Caption = "Bo'lim boshlig'i login va parol";
Shikorlar_Login_va_Parol->RadioButton1->Visible = true;
Shikorlar_Login_va_Parol->RadioButton2->Visible = true;
Form1->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
  Shikorlar_Login_va_Parol->Show();
  Form1->Hide();
  Shikorlar_Login_va_Parol->Caption = "Shifoxona boshlig'i login va parol ";
  Shikorlar_Login_va_Parol->RadioGroup1->Visible = true;

}
//---------------------------------------------------------------------------







