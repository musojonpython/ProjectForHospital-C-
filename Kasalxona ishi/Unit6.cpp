//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit9.h"
#include "Unit7.h"
#include "Unit12.h"
#include "Unit19.h"
#include "Unit18.h"
#include "Unit1.h"
#include "Unit4.h"
#include "Unit11.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm_Shifokor *Form_Shifokor;
bool sort = false;
int soni, s = 0;
//---------------------------------------------------------------------------
__fastcall TForm_Shifokor::TForm_Shifokor(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm_Shifokor::SpeedButton11Click(TObject *Sender)
{
  Form_Bemorlar->Show();
 Form_Bemorlar->Edit1->Visible = false;
 Form_Bemorlar->Edit2->Visible = false;
 Form_Bemorlar->Edit3->Visible = false;
 Form_Bemorlar->SpeedButton1->Visible = true;
 Form_Bemorlar->SpeedButton3->Visible = false;
 Form_Bemorlar->MaskEdit1->Visible = true;
 Form_Bemorlar->MaskEdit2->Visible = true;
 Form_Bemorlar->MaskEdit3->Visible = true;

}
//---------------------------------------------------------------------------
void __fastcall TForm_Shifokor::FormClose(TObject *Sender, TCloseAction &Action)
{
 Form_Shifokor->Caption = "";
 Form1->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm_Shifokor::LabeledEdit1Change(TObject *Sender)
{
  ADOQuery1->Close();
  ADOQuery1->SQL->Clear();
  ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
  ADOQuery1->SQL->Add("where");
  ADOQuery1->SQL->Add("Familliya LIKE '" + LabeledEdit1->Text + "%'");
  ADOQuery1->SQL->Add("and Ismi LIKE '" + LabeledEdit2->Text + "%' and ");
  ADOQuery1->SQL->Add("Shifokor_id = " + Shikorlar_Login_va_Parol->Edit1->Text);
  ADOQuery1->Open();
  if (LabeledEdit1->Text == "") {
  ADOQuery1->Close();
  ADOQuery1->SQL->Clear();
  ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
  ADOQuery1->SQL->Add("WHERE Shifokor_id = " + Shikorlar_Login_va_Parol->Edit1->Text);
  ADOQuery1->Open();
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm_Shifokor::LabeledEdit2Change(TObject *Sender)
{
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
 ADOQuery1->SQL->Add("where");
 ADOQuery1->SQL->Add("Familliya LIKE '" + LabeledEdit1->Text + "%'");
 ADOQuery1->SQL->Add("and Ismi LIKE '" + LabeledEdit2->Text + "%' and ");
 ADOQuery1->SQL->Add(" Shifokor_id = " + Shikorlar_Login_va_Parol->Edit1->Text);
 ADOQuery1->Open();
 if (LabeledEdit1->Text == "") {
  ADOQuery1->Close();
  ADOQuery1->SQL->Clear();
  ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
  ADOQuery1->SQL->Add("WHERE Shifokor_id = " + Shikorlar_Login_va_Parol->Edit1->Text);
  ADOQuery1->Open();
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm_Shifokor::SpeedButton9Click(TObject *Sender)
{
  Panel3->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokor::SpeedButton4Click(TObject *Sender)
{
  Panel3->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm_Shifokor::SpeedButton7Click(TObject *Sender)
{
    Form_Malumotqoshish->Shifokor_uchun->Checked = true;
	Form_Malumotqoshish->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokor::DBGrid1TitleClick(TColumn *Column)
{
   ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   if (sort) {
	   sort = false;
	   ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
	   ADOQuery1->SQL->Add(" where Shifokor_id = " + Shikorlar_Login_va_Parol->Edit1->Text);
	   ADOQuery1->SQL->Add("Order by " + Column->FieldName + " DESC");


   }
   else
   {
	   sort = true;
	   ADOQuery1->SQL->Add("select * from Bemorlar_haqida ");
	   ADOQuery1->SQL->Add(" where Shifokor_id = " + Shikorlar_Login_va_Parol->Edit1->Text);
	   ADOQuery1->SQL->Add(" Order by " + Column->FieldName + " ASC");
   }
   ADOQuery1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokor::SpeedButton3Click(TObject *Sender)
{
   String fam, ismi, asoni;
   ADOQuery1->Open();
   ADOQuery1->Edit();
   fam = ADOQuery1->FieldByName("Familliya")->AsString;
   ismi = ADOQuery1->FieldByName("Ismi")->AsString;
	if(MessageDlg("Familiyasi " + fam + " Ismi " + ismi + " teng bo'lgan bemor malumotlarini o'chiishni hoxlaysizmi?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
	{
	ADOQuery1->Delete();
	asoni = Bemorlar_soni->Caption;
	soni = StrToInt(asoni);
	soni--;
	Bemorlar_soni->Caption = IntToStr(soni);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm_Shifokor::SpeedButton6Click(TObject *Sender)
{
Form_Word_uchun->Show();
}
//---------------------------------------------------------------------------






void __fastcall TForm_Shifokor::Qadiruvsistemasiniochish1Click(TObject *Sender)
{
  LabeledEdit1->Visible = true;
  LabeledEdit2->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokor::Qadiruvsistemasiniyopish1Click(TObject *Sender)
{
	LabeledEdit1->Visible = false;
  LabeledEdit2->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokor::FormActivate(TObject *Sender)
{
   Edit1->Visible = false;
   DBGrid1->Columns->Items[55]->Visible = false;
   DBGrid1->Columns->Items[56]->Visible = false;
    ADOQuery1->First();
   while(!ADOQuery1->Eof){
	 s++;
	 ADOQuery1->Next();
   }
   Bemorlar_soni->Caption = IntToStr(s);
   s = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokor::Chiqish2Click(TObject *Sender)
{
   Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokor::Asosiyoynagaotish1Click(TObject *Sender)
{
 Form_Shifokor->Hide();
 Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokor::Loginvaparoloynasigaotish1Click(TObject *Sender)
{
  Form_Shifokor->Hide();
  Shikorlar_Login_va_Parol->Show();
  Shikorlar_Login_va_Parol->Caption = "Shifokor login va parol";
  Shikorlar_Login_va_Parol->RadioButton1->Visible = false;
  Shikorlar_Login_va_Parol->RadioButton2->Visible = false;
  Shikorlar_Login_va_Parol->RadioGroup1->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokor::SpeedButton5Click(TObject *Sender)
{
	ADOQuery1->Close();
	ADOQuery1->Open();
	ADOQuery2->Close();
	ADOQuery2->Open();
	ShowMessage("Malumotlar qayta yuklandi");
}
//---------------------------------------------------------------------------


void __fastcall TForm_Shifokor::SpeedButton8Click(TObject *Sender)
{
		String i_d = "", familiya = "", ism = "";
		ADOQuery1->Open();
		ADOQuery1->Edit();
		i_d = ADOQuery1->FieldByName("i_d")->AsString;
		Edit1->Text = i_d;
		familiya = ADOQuery1->FieldByName("Familliya")->AsString;
		ism = ADOQuery1->FieldByName("Ismi")->AsString;
		if (ism != "" && familiya != "") {
		int k = 0;
		Labaratoriya_ishi->Show();
		Labaratoriya_ishi->Caption = familiya + "  " + ism + "ning Labaratoriya malumotlari";
		ADOQuery2->First();
		Labaratoriya_ishi->ComboBox1->Clear();
		while(!ADOQuery2->Eof){
		if (ADOQuery2->FieldByName("Bemor_i_d")->AsString == i_d) {
		Labaratoriya_ishi->ComboBox1->Items->Add(ADOQuery2 ->FieldByName("Murojat_sana")->AsString);
		k++;
		}
		ADOQuery2->Next();
	   }
	   if (k == 0) {
	   ShowMessage("Bemor hali labaratoriya topshirmagan");
	   }
	   }else{
		   ShowMessage("Hali bemor tanlanmagan");
	   }
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokor::Yordam1Click(TObject *Sender)
{
   Dasturga_yordam->ShowModal();
}
//---------------------------------------------------------------------------


