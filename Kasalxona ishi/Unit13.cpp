//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit13.h"
#include "Unit6.h"
#include "Unit16.h"
#include "Unit17.h"
#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm_Shifokorlar_haqida *Form_Shifokorlar_haqida;
String nomi;
int id;
bool yes = false;
int s = 0;

//---------------------------------------------------------------------------
__fastcall TForm_Shifokorlar_haqida::TForm_Shifokorlar_haqida(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm_Shifokorlar_haqida::LabeledEdit1Change(TObject *Sender)
{
 if(yes)
 {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Shifokorlar ");
 ADOQuery1->SQL->Add("where");
 ADOQuery1->SQL->Add("Familiya LIKE '" + LabeledEdit1->Text + "%'");
 ADOQuery1->SQL->Add("and Ismi LIKE '" + LabeledEdit2->Text + "%'");
 ADOQuery1->SQL->Add(" and bolim_i_d = " + IntToStr(id));
 ADOQuery1->Open();

 if (LabeledEdit1->Text == "") {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Shifokorlar");
 ADOQuery1->SQL->Add(" where bolim_i_d = " + IntToStr(id));
 ADOQuery1->Open();
 }
}
else
{
  ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Shifokorlar ");
 ADOQuery1->SQL->Add("where");
 ADOQuery1->SQL->Add("Familiya LIKE '" + LabeledEdit1->Text + "%'");
 ADOQuery1->SQL->Add("and Ismi LIKE '" + LabeledEdit2->Text + "%'");
 ADOQuery1->Open();

 if (LabeledEdit1->Text == "") {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Shifokorlar");
 ADOQuery1->Open();
 }
}
 }
//---------------------------------------------------------------------------
void __fastcall TForm_Shifokorlar_haqida::LabeledEdit2Change(TObject *Sender)
{
 if(yes)
 {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Shifokorlar ");
 ADOQuery1->SQL->Add("where");
 ADOQuery1->SQL->Add("Familiya LIKE '" + LabeledEdit1->Text + "%'");
 ADOQuery1->SQL->Add("and Ismi LIKE '" + LabeledEdit2->Text + "%'");
 ADOQuery1->SQL->Add(" and bolim_i_d = " + IntToStr(id));
 ADOQuery1->Open();

 if (LabeledEdit1->Text == "") {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Shifokorlar");
 ADOQuery1->SQL->Add(" where bolim_i_d = " + IntToStr(id));
 ADOQuery1->Open();
 }
}
else
{
  ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Shifokorlar ");
 ADOQuery1->SQL->Add("where");
 ADOQuery1->SQL->Add("Familiya LIKE '" + LabeledEdit1->Text + "%'");
 ADOQuery1->SQL->Add("and Ismi LIKE '" + LabeledEdit2->Text + "%'");
 ADOQuery1->Open();

 if (LabeledEdit1->Text == "") {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Shifokorlar");
 ADOQuery1->Open();
 }
}
}
//---------------------------------------------------------------------------
void __fastcall TForm_Shifokorlar_haqida::DBGrid2TitleClick(TColumn *Column)
{
   bool sort;
   if(yes)
   {
   ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   if (sort) {
	   sort = false;
	   ADOQuery1->SQL->Add("select * from Shifokorlar");
	   ADOQuery1->SQL->Add(" where bolim_i_d = " + IntToStr(id));
	   ADOQuery1->SQL->Add("Order by " + Column->FieldName + " DESC");
   }
   else
   {
	   sort = true;
	   ADOQuery1->SQL->Add("select * from Shifokorlar");
	   ADOQuery1->SQL->Add(" where bolim_i_d = " + IntToStr(id));
	   ADOQuery1->SQL->Add("Order by " + Column->FieldName + " ASC");
   }
   ADOQuery1->Open();
   }else
   {
	 ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   if (sort) {
	   sort = false;
	   ADOQuery1->SQL->Add("select * from Shifokorlar");
	   ADOQuery1->SQL->Add("Order by " + Column->FieldName + " DESC");
   }
   else
   {
	   sort = true;
	   ADOQuery1->SQL->Add("select * from Shifokorlar");
	   ADOQuery1->SQL->Add("Order by " + Column->FieldName + " ASC");
   }
   ADOQuery1->Open();
   }
}
//---------------------------------------------------------------------------




void __fastcall TForm_Shifokorlar_haqida::FormClose(TObject *Sender, TCloseAction &Action)
{
  Form1->Show();
  ComboBox1->Items->Clear();
  Form_Shifokorlar_haqida->Caption = "";
}
//---------------------------------------------------------------------------


void __fastcall TForm_Shifokorlar_haqida::SpeedButton9Click(TObject *Sender)
{
  Shifokorlar_haqida_malumot_toldirish->Shifokorlar->Checked = true;
  Shifokorlar_haqida_malumot_toldirish->Telefon_nomer->Visible = false;
  Shifokorlar_haqida_malumot_toldirish->Pasport_raqami->Visible = false;
  Shifokorlar_haqida_malumot_toldirish->Tug_kun_oy_yil->Visible = false;
  Shifokorlar_haqida_malumot_toldirish->Jinsi->Visible = false;
  Shifokorlar_haqida_malumot_toldirish->Telefon_nomeri->Visible = true;
  Shifokorlar_haqida_malumot_toldirish->Pasporti->Visible = true;
  Shifokorlar_haqida_malumot_toldirish->Tug_kun_Edit->Visible = true;
  Shifokorlar_haqida_malumot_toldirish->Jins->Visible = true;
  ADOQuery1->Open();
  ADOQuery1->Edit();
  Shifokorlar_haqida_malumot_toldirish->Familiyasi->Text = ADOQuery1->FieldByName("Familiya")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Ismi->Text = ADOQuery1->FieldByName("Ismi")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Otasini_Ismi->Text = ADOQuery1->FieldByName("Otasini_ismi")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Lavozimi->Text = ADOQuery1->FieldByName("Lavozimi")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Login->Text = ADOQuery1->FieldByName("Login")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Parol->Text = ADOQuery1->FieldByName("parol")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Tug_kun_Edit->Text = ADOQuery1->FieldByName("Tugilgan_kun_oy_yil")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Ishga_kelish_vaqti->Text = ADOQuery1->FieldByName("Ishga_kelishi")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Ishdan_ketish_vaqti->Text = ADOQuery1->FieldByName("Ishdan_ketishi")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Ish_haqqi->Text = ADOQuery1->FieldByName("Ish_haqqi")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Yashash_manzili->Text = ADOQuery1->FieldByName("Yashash_manzili")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Bolim_nomi->Text = ADOQuery1->FieldByName("Bolim_nomi")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Pasporti->Text = ADOQuery1->FieldByName("Pasport_raqami")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Ish_faoliyati->Text = ADOQuery1->FieldByName("Ish_faoliyati")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Telefon_nomeri->Text = ADOQuery1->FieldByName("Telefon_nomeri")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Jins->Text = ADOQuery1->FieldByName("Jinsi")->AsString;
  Shifokorlar_haqida_malumot_toldirish->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokorlar_haqida::FormActivate(TObject *Sender)
{
   ComboBox1->Items->Clear();
   ADOQuery2->First();
   while(!ADOQuery2->Eof)
   {
	 ComboBox1->Items->Add(ADOQuery2->FieldByName("bolim_nomi")->AsString);
		ADOQuery2->Next();
   }
   ComboBox1->Items->Add("-----------");
   DBGrid2->Columns->Items[14]->Visible = false;
    ADOQuery1->First();
   while(!ADOQuery1->Eof){
	 s++;
	 ADOQuery1->Next();
   }
   Bemorlar_soni->Caption = IntToStr(s);
   s = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokorlar_haqida::ComboBox1Change(TObject *Sender)
{
   nomi = ComboBox1->Text;
   ADOQuery2->First();
   while(!ADOQuery2->Eof)
   {
	if(nomi == ADOQuery2->FieldByName("Bolim_nomi")->AsString)
	{
	 id = ADOQuery2->FieldByName("i_d")->AsInteger;
	 yes = true;
	 break;
	}
	 ADOQuery2->Next();
   }
   if(nomi == "-----------"){
   ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Add("select * from Shifokorlar ");
   ADOQuery1->Open();
   }else{
   ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Add("select * from Shifokorlar ");
   ADOQuery1->SQL->Add("where bolim_i_d = " + IntToStr(id));
   ADOQuery1->Open();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokorlar_haqida::SpeedButton6Click(TObject *Sender)
{
  String familiyasi, ismi, malumot;
  ADOQuery1->Open();
  ADOQuery1->Edit();
  familiyasi = ADOQuery1->FieldByName("Familiya")->AsString;
  ismi = ADOQuery1->FieldByName("ismi")->AsString;
  malumot = "Familiyasi " + familiyasi + "  Ismi " + ismi + " ga teng bo'lgan shifokor malumotlarini o'chirilishini hoxlaysizmi?";
  if(MessageDlg(malumot, mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
		ADOQuery1->Delete();
}
//---------------------------------------------------------------------------


void __fastcall TForm_Shifokorlar_haqida::Chiqish2Click(TObject *Sender)
{
	Form_Shifokorlar_haqida->Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm_Shifokorlar_haqida::Qadiruvsistemasiniochish1Click(TObject *Sender)

{
  Panel2->Visible = true;
  LabeledEdit1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokorlar_haqida::Qadiruvsistemasiniyopish1Click(TObject *Sender)

{
   Panel2->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokorlar_haqida::Asosiyoynagaotish1Click(TObject *Sender)

{
   Form_Shifokorlar_haqida->Hide();
   Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokorlar_haqida::Loginvaparoloynasigaotish1Click(TObject *Sender)

{
	  Form_Shifokorlar_haqida->Hide();
	  Form_Bemorlar_Shifoxona_boshligi_uchun->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Shifokorlar_haqida::Bolimboshliqariroyxatigaotish1Click(TObject *Sender)

{
	 Form_Shifokorlar_haqida->Hide();
	 Form_Bolim_boshliqlari->Show();
}
//---------------------------------------------------------------------------



void __fastcall TForm_Shifokorlar_haqida::SpeedButton2Click(TObject *Sender)
{
	 ADOQuery1->Close();
	 ADOQuery1->Open();
	 ADOQuery2->Close();
	 ADOQuery2->Open();
	 ShowMessage("Malumotlar qayta yuklandi");
}
//---------------------------------------------------------------------------


