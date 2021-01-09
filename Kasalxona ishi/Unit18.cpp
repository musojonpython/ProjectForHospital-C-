//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit18.h"
#include "Unit6.h"
#include "Unit13.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm_Shifoxona_boshligi_login_parol *Form_Shifoxona_boshligi_login_parol;
//---------------------------------------------------------------------------
__fastcall TForm_Shifoxona_boshligi_login_parol::TForm_Shifoxona_boshligi_login_parol(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm_Shifoxona_boshligi_login_parol::FormClose(TObject *Sender, TCloseAction &Action)
{
  Form1->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm_Shifoxona_boshligi_login_parol::SpeedButton1Click(TObject *Sender)

{
	AnsiString log, parol, loga, parola;
	bool bor = true;
	ADOQuery1->Open();
	log = LabeledEdit1->Text;
	parol = LabeledEdit2->Text;
	ADOQuery1->First();
	for (int i = 0; i < ADOQuery1->RecordCount; i++)
	{
	loga = ADOQuery1->FieldByName("Login")->AsString;
	parola = ADOQuery1->FieldByName("Parol")->AsString;

	if(log == loga && parol == parola)
	  {
	  Form_Shifoxona_boshligi_login_parol->ClientHeight = 350;
	  Form_Shifoxona_boshligi_login_parol->ComboBox1->Visible = true;
	  Form_Shifoxona_boshligi_login_parol->SpeedButton3->Visible = true;
	  LabeledEdit1->Text = "";
	  LabeledEdit2->Text = "";
	  bor = true;
	  break;
	  }
	else
		bor = false;
		ADOQuery1->Next();
   }
   if(!bor)
   {
	   Label1->Visible = true;
	   LabeledEdit2->Text = "";
   }

}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifoxona_boshligi_login_parol::SpeedButton2Click(TObject *Sender)

{
  Form_Shifoxona_boshligi_login_parol->Hide();
  Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifoxona_boshligi_login_parol::SpeedButton3Click(TObject *Sender)

{
  if(ComboBox1->Text == "Shifokorlar")
   {
	   Form_Shifokorlar_haqida->Show();
	   Form_Shifoxona_boshligi_login_parol->Hide();
	   Form_Shifokorlar_haqida->ComboBox1->Visible = true;
	   Form_Shifokorlar_haqida->Label1->Visible = true;
   }
   if (ComboBox1->Text == "Bemorlar") {
	 Form_Bemorlar_Shifoxona_boshligi_uchun->Show();
	 Form_Shifokor->Label13->Caption = ADOQuery1->FieldByName("familiyasi")->AsString;
	 Form_Shifokor->Label17->Caption = ADOQuery1->FieldByName("ismi")->AsString;
	 Form_Shifokor->Label20->Caption = ADOQuery1->FieldByName("Otasini_ismi")->AsString;
	 Form_Shifokor->Label24->Visible = true;
	 Form_Shifokor->SpeedButton2->Visible = true;
	 Form_Shifokor->SpeedButton3->Visible = true;
	 Form_Shifoxona_boshligi_login_parol->Hide();
   }
	Form_Shifoxona_boshligi_login_parol->ComboBox1->Visible = false;
	Form_Shifoxona_boshligi_login_parol->SpeedButton3->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifoxona_boshligi_login_parol::SpeedButton3MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y)
{
  SpeedButton3->Font->Style = TFontStyles() << fsBold << fsItalic;
  SpeedButton3->Font->Color = clRed;

}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifoxona_boshligi_login_parol::SpeedButton3MouseLeave(TObject *Sender)

{
	SpeedButton3->Font->Style = TFontStyles();
	SpeedButton3->Font->Color = clBlack;
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifoxona_boshligi_login_parol::FormActivate(TObject *Sender)
{
	Form_Shifoxona_boshligi_login_parol->ClientHeight = 250;
	Label1->Visible = false;
}
//---------------------------------------------------------------------------



