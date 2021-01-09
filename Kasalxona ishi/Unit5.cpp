//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm_Bolim_boshliqlari *Form_Bolim_boshliqlari;
bool sort;
int s = 0, soni;
//---------------------------------------------------------------------------
__fastcall TForm_Bolim_boshliqlari::TForm_Bolim_boshliqlari(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm_Bolim_boshliqlari::Qadiruvsistemasiniochish1Click(TObject *Sender)
{
   LabeledEdit1->Visible = true;
   LabeledEdit2->Visible = true;
   LabeledEdit1->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm_Bolim_boshliqlari::Qadiruvsistemasiniyopish1Click(TObject *Sender)
{
	 LabeledEdit1->Visible = false;
	 LabeledEdit2->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm_Bolim_boshliqlari::SpeedButton4Click(TObject *Sender)
{
  Shifokorlar_haqida_malumot_toldirish->Bolim_boshliqlari->Checked = true;
  Shifokorlar_haqida_malumot_toldirish->Telefon_nomer->Visible = true;
  Shifokorlar_haqida_malumot_toldirish->Pasport_raqami->Visible = true;
  Shifokorlar_haqida_malumot_toldirish->Tug_kun_oy_yil->Visible = true;
  Shifokorlar_haqida_malumot_toldirish->Jinsi->Visible = true;
  Shifokorlar_haqida_malumot_toldirish->Telefon_nomeri->Visible = false;
  Shifokorlar_haqida_malumot_toldirish->Pasporti->Visible = false;
  Shifokorlar_haqida_malumot_toldirish->Tug_kun_Edit->Visible = false;
  Shifokorlar_haqida_malumot_toldirish->Jins->Visible = false;
  Shifokorlar_haqida_malumot_toldirish->Caption = "Bo'lim boshliqlari haqida malumot to'ldirish";
  Shifokorlar_haqida_malumot_toldirish->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm_Bolim_boshliqlari::Chiqish2Click(TObject *Sender)
{
   Form_Bolim_boshliqlari->Close();
   Form1->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm_Bolim_boshliqlari::Asosiyoynagaotish1Click(TObject *Sender)

{
   Form_Bolim_boshliqlari->Close();
   Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Bolim_boshliqlari::Loginvaparoloynasigaotish1Click(TObject *Sender)
{
 Form_Bolim_boshliqlari->Close();
 Shikorlar_Login_va_Parol->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm_Bolim_boshliqlari::Shifokorlarhaqidagimalumotlar1Click(TObject *Sender)
{
	Form_Bolim_boshliqlari->Close();
	Form_Shifokorlar_haqida->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm_Bolim_boshliqlari::Bemorlarhaqidagimalumotlar1Click(TObject *Sender)
{
	Form_Bolim_boshliqlari->Close();
	Form_Bemorlar_Shifoxona_boshligi_uchun->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm_Bolim_boshliqlari::SpeedButton7Click(TObject *Sender)
{
	String familiya = "", ismi = "", toliq = "", asoni;
	ADOQuery1->Open();
	ADOQuery1->Edit();
	familiya = ADOQuery1->FieldByName("Familiya")->AsString;
	ismi = ADOQuery1->FieldByName("Ismi")->AsString;
	toliq = "Failiyasi " + familiya + " ismi " + ismi + " bo'lgan bo'lim boshlig'i malumotlarini o'chirilishini hoxlaysizmi?";
	if(MessageDlg(toliq, mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes){
		ADOQuery1->Delete();
	asoni = Bemorlar_soni->Caption;
	soni = StrToInt(asoni);
	soni--;
	Bemorlar_soni->Caption = IntToStr(soni);
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm_Bolim_boshliqlari::LabeledEdit1Change(TObject *Sender)
{
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Bolim_Boshliqlari");
 ADOQuery1->SQL->Add("where");
 ADOQuery1->SQL->Add("Familiya LIKE '" + LabeledEdit1->Text + "%'");
 ADOQuery1->SQL->Add("and Ismi LIKE '" + LabeledEdit2->Text + "%'");
 ADOQuery1->Open();
 if (LabeledEdit1->Text == "") {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Bolim_Boshliqlari");
 ADOQuery1->Open();
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm_Bolim_boshliqlari::LabeledEdit2Change(TObject *Sender)
{
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Bolim_Boshliqlari");
 ADOQuery1->SQL->Add("where");
 ADOQuery1->SQL->Add("Familiya LIKE '" + LabeledEdit1->Text + "%'");
 ADOQuery1->SQL->Add("and Ismi LIKE '" + LabeledEdit2->Text + "%'");
 ADOQuery1->Open();
 if (LabeledEdit1->Text == "") {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Bolim_Boshliqlari");
 ADOQuery1->Open();
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm_Bolim_boshliqlari::DBGrid1TitleClick(TColumn *Column)
{
	  ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   if (sort) {
	   sort = false;
	   ADOQuery1->SQL->Add("select * from Bolim_Boshliqlari");
	   ADOQuery1->SQL->Add("Order by " + Column->FieldName + " DESC");
	 }
   else
   {
	   sort = true;
	   ADOQuery1->SQL->Add("select * from Bolim_Boshliqlari ");
	   ADOQuery1->SQL->Add(" Order by " + Column->FieldName + " ASC");
   }
   ADOQuery1->Open();
}
//---------------------------------------------------------------------------



void __fastcall TForm_Bolim_boshliqlari::SpeedButton5Click(TObject *Sender)
{
  Form_Bolim_boshliqlari->Close();
  Form1->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm_Bolim_boshliqlari::FormActivate(TObject *Sender)
{
	 LabeledEdit1->Visible = false;
	 LabeledEdit2->Visible = false;
	 ADOQuery1->First();
	 while(!ADOQuery1->Eof){
	 s++;
	 ADOQuery1->Next();
  }
  Bemorlar_soni->Caption = IntToStr(s);
  s = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm_Bolim_boshliqlari::SpeedButton2Click(TObject *Sender)
{
  Shifokorlar_haqida_malumot_toldirish->Bolim_boshliqlari_haqida_malumot->Checked = true;
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
 // ADOQuery1->Post();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Bolim_boshliqlari::FormClose(TObject *Sender, TCloseAction &Action)

{
   Form_Bolim_boshliqlari->Hide();
   Form1->Show();
}
//---------------------------------------------------------------------------

