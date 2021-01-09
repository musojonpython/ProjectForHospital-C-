//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit14.h"
#include "Unit13.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm14_Bolim_boshligi_Login_Parol *Form14_Bolim_boshligi_Login_Parol;
int bolim_i_d;
//---------------------------------------------------------------------------
__fastcall TForm14_Bolim_boshligi_Login_Parol::TForm14_Bolim_boshligi_Login_Parol(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm14_Bolim_boshligi_Login_Parol::SpeedButton1Click(TObject *Sender)
{
	bool bor = true;
	AnsiString log, parol, loga, parola;
	log = LabeledEdit1->Text;
	parol = LabeledEdit2->Text;

   ADOQuery1->First();
   while(!ADOQuery1->Eof)
   {
	 loga = ADOQuery1->FieldByName("Login")->AsString;
	 parola = ADOQuery1->FieldByName("Parol")->AsString;
	 if(log == loga && parol == parola)
	  {
	  Form14_Bolim_boshligi_Login_Parol->ClientHeight = 372;
	  bolim_i_d = ADOQuery1->FieldByName("i_d")->AsInteger;
	  Edit1->Text = IntToStr(bolim_i_d);
	  LabeledEdit1->Text = "";
	  LabeledEdit2->Text = "";
	  bor = true;
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
void __fastcall TForm14_Bolim_boshligi_Login_Parol::FormActivate(TObject *Sender)

{
	Form14_Bolim_boshligi_Login_Parol->ClientHeight = 230;
   Label1->Visible = false;
   LabeledEdit1->Text = "";
   LabeledEdit2->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm14_Bolim_boshligi_Login_Parol::FormClose(TObject *Sender, TCloseAction &Action)

{
  Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm14_Bolim_boshligi_Login_Parol::SpeedButton2Click(TObject *Sender)

{
	Form14_Bolim_boshligi_Login_Parol->Hide();
  Form1->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm14_Bolim_boshligi_Login_Parol::SpeedButton3Click(TObject *Sender)

{
	if(RadioButton1->Checked)
  {
	  Form_Shifokorlar_haqida->Show();
	  Form_Shifokorlar_haqida->ComboBox1->Visible = false;
	  Form_Shifokorlar_haqida->Label1->Visible = false;
	  Form_Shifokorlar_haqida->ADOQuery1->Close();
	  Form_Shifokorlar_haqida->ADOQuery1->SQL->Clear();
	  Form_Shifokorlar_haqida->ADOQuery1->SQL->Add("select * from Shifokorlar ");
	  Form_Shifokorlar_haqida->ADOQuery1->SQL->Add("where bolim_i_d = " + IntToStr(bolim_i_d));
	  Form_Shifokorlar_haqida->ADOQuery1->Open();
	  Form14_Bolim_boshligi_Login_Parol->Hide();
  }
  if (RadioButton2->Checked) {
	  Form14_Bolim_boshligi_Login_Parol->Hide();
	  Form_Bolim_boshligi_uchun_Bemorlar->Show();
	  Form_Bolim_boshligi_uchun_Bemorlar->ADOQuery1->Close();
	  Form_Bolim_boshligi_uchun_Bemorlar->ADOQuery1->SQL->Clear();
	  Form_Bolim_boshligi_uchun_Bemorlar->ADOQuery1->SQL->Add("select * from Bemorlar_haqida ");
	  Form_Bolim_boshligi_uchun_Bemorlar->ADOQuery1->SQL->Add("where Bolim_id = " + IntToStr(bolim_i_d));
	  Form_Bolim_boshligi_uchun_Bemorlar->ADOQuery1->Open();
	  Form_Bolim_boshligi_uchun_Bemorlar->SpeedButton3->Visible = true;
	  Form_Bolim_boshligi_uchun_Bemorlar->SpeedButton2->Visible = true;
  }
}
//---------------------------------------------------------------------------
