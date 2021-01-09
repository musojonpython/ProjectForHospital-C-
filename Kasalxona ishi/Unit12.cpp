//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit12.h"
#include "Unit6.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TShikorlar_Login_va_Parol *Shikorlar_Login_va_Parol;
int Shifokor_i_d, bolim_i_d;
bool bor = false;
String bolim_fam_ism;
int s = 0;

//---------------------------------------------------------------------------
__fastcall TShikorlar_Login_va_Parol::TShikorlar_Login_va_Parol(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TShikorlar_Login_va_Parol::FormClose(TObject *Sender, TCloseAction &Action)
{
  Form1->Show();
  RadioButton1->Visible = false;
  RadioButton2->Visible = false;
  RadioGroup1->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TShikorlar_Login_va_Parol::SpeedButton1Click(TObject *Sender)
{

  if(LabeledEdit1->Text != "" && LabeledEdit2->Text != "")
  {
	AnsiString log, parol;
	log = LabeledEdit1->Text;
	parol = LabeledEdit2->Text;
   if(RadioGroup1->Visible == true)
   {
	bor = false;
   ADOQuery_Direktor->First();
	   while(!ADOQuery_Direktor->Eof)
	   {
		   if(log == ADOQuery_Direktor->FieldByName("Login")->AsString && parol == ADOQuery_Direktor->FieldByName("Parol")->AsString)
		   {
			  Shikorlar_Login_va_Parol->ClientHeight = 400;
			  bolim_fam_ism += "Shifoxona boshlig'i ";
			  bolim_fam_ism += ADOQuery_Direktor->FieldByName("Familiya")->AsString;
			  bolim_fam_ism += "  ";
			  bolim_fam_ism += ADOQuery_Direktor->FieldByName("ismi")->AsString;
			  bor = true;
			  break;
		   }
		   ADOQuery_Direktor->Next();
	   }
	   if(!bor)
	 {
	Label1->Visible = true;
	LabeledEdit2->Text = "";
	 }
   }
	if(RadioButton1->Visible == true && RadioButton2->Visible == true)
	{
	bor = false;
   ADOQuery_Bolim_boligi->First();
   while(!ADOQuery_Bolim_boligi->Eof)
   {
	   if(log == ADOQuery_Bolim_boligi->FieldByName("Login")->AsString && parol == ADOQuery_Bolim_boligi->FieldByName("Parol")->AsString)
		   {
              Edit3->Text = "";
			  bolim_fam_ism += ADOQuery_Bolim_boligi->FieldByName("Familiya")->AsString;
			  bolim_fam_ism += "  ";
			  bolim_fam_ism += ADOQuery_Bolim_boligi->FieldByName("Ismi")->AsString;
			  Shikorlar_Login_va_Parol->ClientHeight = 400;
			  bolim_i_d = ADOQuery_Bolim_boligi->FieldByName("i_d")->AsInteger;
			  Edit3->Text = IntToStr(bolim_i_d);
			  bor = true;
			   break;
		   }
	   ADOQuery_Bolim_boligi->Next();
   }
   if(!bor)
	{
	Label1->Visible = true;
	LabeledEdit2->Text = "";
	}
	}
	if(RadioButton1->Visible == false && RadioButton2->Visible == false && RadioGroup1->Visible == false)
	{
	bor = false;
	ADOQuery_Shifokor->First();
	while(!ADOQuery_Shifokor->Eof)
   {
	   if(log == ADOQuery_Shifokor->FieldByName("Login")->AsString && parol == ADOQuery_Shifokor->FieldByName("Parol")->AsString)
   {
	  Form_Shifokor->Caption += ADOQuery_Shifokor->FieldByName("Familiya")->AsString;
	  Form_Shifokor->Caption += "  ";
	  Form_Shifokor->Caption += ADOQuery_Shifokor->FieldByName("Ismi")->AsString;
	  Form_Shifokor->Caption +="ning bemorlari ro'yxati";
	  Shifokor_i_d = ADOQuery_Shifokor->FieldByName("i_d")->AsInteger;
	  bolim_i_d = ADOQuery_Shifokor->FieldByName("Bolim_i_d")->AsInteger;
	  Edit1->Text = IntToStr(Shifokor_i_d);
	  Edit2->Text = IntToStr(bolim_i_d);
	  Form_Shifokor->ADOQuery1->Close();
	  Form_Shifokor->ADOQuery1->SQL->Clear();
	  Form_Shifokor->ADOQuery1->SQL->Add("select * from Bemorlar_haqida ");
	  Form_Shifokor->ADOQuery1->SQL->Add("where Shifokor_id = " + IntToStr(Shifokor_i_d));
	  Form_Shifokor->ADOQuery1->Open();
	  Shikorlar_Login_va_Parol->Hide();
	  Form_Shifokor->Show();
	  bor = true;
	  break;
	 }
		 ADOQuery_Shifokor->Next();
	  }
	  if(!bor)
	{
	Label1->Visible = true;
	LabeledEdit2->Text = "";
	}
	 }
}
 else
	 Label1->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TShikorlar_Login_va_Parol::SpeedButton2Click(TObject *Sender)
{

	if(MessageDlg("Chiqishni xohlaysizmi?", mtInformation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
  {
  Shikorlar_Login_va_Parol->Hide();
  Form1->Show();
  }

}
//---------------------------------------------------------------------------

void __fastcall TShikorlar_Login_va_Parol::FormActivate(TObject *Sender)
{
	 Label1->Visible = false;
	 LabeledEdit1->SetFocus();
	 Shikorlar_Login_va_Parol->LabeledEdit1->Text = "";
	 Shikorlar_Login_va_Parol->LabeledEdit2->Text = "";
	 Shikorlar_Login_va_Parol->ClientHeight = 250;
	 bolim_fam_ism = "";
	 RadioGroup1->Visible  = false;
	 RadioButton1->Visible = false;
	 RadioButton2->Visible = false;
	


}
//---------------------------------------------------------------------------
void __fastcall TShikorlar_Login_va_Parol::SpeedButton3Click(TObject *Sender)
{

if(RadioGroup1->Visible == true)
	{
	if(RadioGroup1->ItemIndex == 0)
   {
	   Shikorlar_Login_va_Parol->Hide();
	   Form_Shifokorlar_haqida->ComboBox1->Visible = true;
	   Form_Shifokorlar_haqida->Label1->Visible = true;
	   bolim_fam_ism += "ning shifokorlar ro'yati ";
	   Form_Shifokor->Caption = bolim_fam_ism;
	   Form_Shifokorlar_haqida->Show();
   }
   if (RadioGroup1->ItemIndex == 1) {
	 Shikorlar_Login_va_Parol->Hide();
	 bolim_fam_ism += "ning bemorlar ro'yati ";
	 Form_Bemorlar_Shifoxona_boshligi_uchun->Caption = bolim_fam_ism;
	 Form_Bemorlar_Shifoxona_boshligi_uchun->Show();
   }
	  if (RadioGroup1->ItemIndex == 2) {
	 Shikorlar_Login_va_Parol->Hide();
	 bolim_fam_ism += "ning bo'lim boshliqlari ro'yati ";
	 Form_Bolim_boshliqlari->Caption = bolim_fam_ism;
	 Form_Bolim_boshliqlari->Show();
   }
	if(RadioGroup1->ItemIndex == 3)
	{

   Shikorlar_Login_va_Parol->Hide();
   Shifokorlar_haqida_malumot_toldirish->Caption = "Shifoxona boshlig'i malumotlarini o'zgartirish";
   Shifokorlar_haqida_malumot_toldirish->Shifoxona_boshligi->Checked = true;
   Shifokorlar_haqida_malumot_toldirish->Telefon_nomer->Visible = false;
   Shifokorlar_haqida_malumot_toldirish->Pasport_raqami->Visible = false;
   Shifokorlar_haqida_malumot_toldirish->Tug_kun_oy_yil->Visible = false;
   Shifokorlar_haqida_malumot_toldirish->Jinsi->Visible = false;
   Shifokorlar_haqida_malumot_toldirish->Telefon_nomeri->Visible = true;
   Shifokorlar_haqida_malumot_toldirish->Pasporti->Visible = true;
   Shifokorlar_haqida_malumot_toldirish->Tug_kun_Edit->Visible = true;
   Shifokorlar_haqida_malumot_toldirish->Jins->Visible = true;
   ADOQuery_Direktor_malumotlari->Open();
   ADOQuery_Direktor_malumotlari->Edit();
   Shifokorlar_haqida_malumot_toldirish->Familiyasi->Text =           ADOQuery_Direktor_malumotlari->FieldByName("Familiya")->AsString;
   Shifokorlar_haqida_malumot_toldirish->Ismi->Text =                 ADOQuery_Direktor_malumotlari->FieldByName("Ismi")->AsString;
   Shifokorlar_haqida_malumot_toldirish->Otasini_Ismi->Text =         ADOQuery_Direktor_malumotlari->FieldByName("Otasini_ismi")->AsString;
   Shifokorlar_haqida_malumot_toldirish->Lavozimi->Text =             ADOQuery_Direktor_malumotlari->FieldByName("Lavozimi")->AsString;
   Shifokorlar_haqida_malumot_toldirish->Login->Text =                ADOQuery_Direktor_malumotlari->FieldByName("Login")->AsString;
   Shifokorlar_haqida_malumot_toldirish->Parol->Text =                ADOQuery_Direktor_malumotlari->FieldByName("parol")->AsString;
   Shifokorlar_haqida_malumot_toldirish->Tug_kun_Edit->Text =         ADOQuery_Direktor_malumotlari->FieldByName("Tugilgan_kun_oy_yil")->AsString;
   Shifokorlar_haqida_malumot_toldirish->Ishga_kelish_vaqti->Text =   ADOQuery_Direktor_malumotlari->FieldByName("Ishga_kelishi")->AsString;
   Shifokorlar_haqida_malumot_toldirish->Ishdan_ketish_vaqti->Text =  ADOQuery_Direktor_malumotlari->FieldByName("Ishdan_ketishi")->AsString;
   Shifokorlar_haqida_malumot_toldirish->Ish_haqqi->Text =            ADOQuery_Direktor_malumotlari->FieldByName("Ish_haqqi")->AsString;
   Shifokorlar_haqida_malumot_toldirish->Yashash_manzili->Text =      ADOQuery_Direktor_malumotlari->FieldByName("Yashash_manzili")->AsString;
   Shifokorlar_haqida_malumot_toldirish->Pasporti->Text =             ADOQuery_Direktor_malumotlari->FieldByName("Pasport_raqami")->AsString;
   Shifokorlar_haqida_malumot_toldirish->Ish_faoliyati->Text =        ADOQuery_Direktor_malumotlari->FieldByName("Ish_faoliyati")->AsString;
   Shifokorlar_haqida_malumot_toldirish->Telefon_nomeri->Text =       ADOQuery_Direktor_malumotlari->FieldByName("Telefon_nomeri")->AsString;
   Shifokorlar_haqida_malumot_toldirish->Jins->Text =                 ADOQuery_Direktor_malumotlari->FieldByName("Jinsi")->AsString;
   Shifokorlar_haqida_malumot_toldirish->Show();
	}
   }
   else
   {
	   if(RadioButton1->Checked)
   {
	  Form_Shifokorlar_bolim_boshligi_uchun->Caption = bolim_fam_ism + "ning shifokorlar ro'yxati";
	  Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->Close();
	  Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->SQL->Clear();
	  Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->SQL->Add("select * from Shifokorlar ");
	  Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->SQL->Add("where bolim_i_d = " + IntToStr(bolim_i_d));
	  Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->Open();
	  Shikorlar_Login_va_Parol->Hide();
	  Form_Shifokorlar_bolim_boshligi_uchun->Show();
   }
   if (RadioButton2->Checked) {
	  Form_Bolim_boshligi_uchun_Bemorlar->Caption = bolim_fam_ism + "ning bemorlar ro'yxati";
	  Form_Bolim_boshligi_uchun_Bemorlar->ADOQuery1->Close();
	  Form_Bolim_boshligi_uchun_Bemorlar->ADOQuery1->SQL->Clear();
	  Form_Bolim_boshligi_uchun_Bemorlar->ADOQuery1->SQL->Add("select * from Bemorlar_haqida ");
	  Form_Bolim_boshligi_uchun_Bemorlar->ADOQuery1->SQL->Add("where Bolim_id = " + IntToStr(bolim_i_d));
	  Form_Bolim_boshligi_uchun_Bemorlar->ADOQuery1->Open();

	  Form_Bolim_boshligi_uchun_Bemorlar->SpeedButton3->Visible = true;
	  Form_Bolim_boshligi_uchun_Bemorlar->SpeedButton2->Visible = true;
	  Shikorlar_Login_va_Parol->Hide();
	  Form_Bolim_boshligi_uchun_Bemorlar->Show();
   }
	}
}
//---------------------------------------------------------------------------




void __fastcall TShikorlar_Login_va_Parol::SpeedButton4Click(TObject *Sender)
{
	 ADOQuery1->Close();
	 ADOQuery1->Open();
	 ADOQuery_Bolim_boligi->Close();
	 ADOQuery_Bolim_boligi->Open();
	 ADOQuery_Direktor->Close();
	 ADOQuery_Direktor->Open();
	 ADOQuery_Direktor_malumotlari->Close();
	 ADOQuery_Direktor_malumotlari->Open();
	 ADOQuery_Shifokor->Close();
	 ADOQuery_Shifokor->Open();
	 ShowMessage("Malumotlar qayta yuklandi");
}
//---------------------------------------------------------------------------


