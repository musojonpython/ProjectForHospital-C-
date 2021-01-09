//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit16.h"
#include "Unit13.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TShifokorlar_haqida_malumot_toldirish *Shifokorlar_haqida_malumot_toldirish;
//---------------------------------------------------------------------------
__fastcall TShifokorlar_haqida_malumot_toldirish::TShifokorlar_haqida_malumot_toldirish(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TShifokorlar_haqida_malumot_toldirish::SpeedButton1Click(TObject *Sender)
{
 bool bor = false;
 String log = "", par = "";
 if(Bolim_boshliqlari_haqida_malumot->Checked == true)
 {
 Form_Bolim_boshliqlari->ADOQuery1->Open();
 Form_Bolim_boshliqlari->ADOQuery1->Edit();
 log = Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Login")->AsString;
 par = Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Parol")->AsString;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Familiya")->AsString             = Familiyasi->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Ismi")->AsString                 = Ismi->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Otasini_ismi")->AsString         = Otasini_Ismi->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Tugilgan_kun_oy_yil")->AsString  = Tug_kun_Edit->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Login")->AsString                = Login->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Parol")->AsString                = Parol->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Lavozimi")->AsString             = Lavozimi->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Ishga_kelishi")->AsString        = Ishga_kelish_vaqti->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Ishdan_ketishi")->AsString       = Ishdan_ketish_vaqti->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Ish_haqqi")->AsString            = Ish_haqqi->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Telefon_nomeri")->AsString       = Telefon_nomeri->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Pasport_raqami")->AsString       = Pasporti->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Ish_faoliyati")->AsString        = Ish_faoliyati->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Yashash_manzili")->AsString      = Yashash_manzili->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Bolim_nomi")->AsString           = Bolim_nomi->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Jinsi")->AsString                = Jins->Text;
 if (log != Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Login")->AsString || par != Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Parol")->AsString) {
  ADOQuery_bolim_boshliq->First();
 while(!ADOQuery_bolim_boshliq->Eof){
 if (ADOQuery_bolim_boshliq->FieldByName("Login")->AsString == Login->Text && ADOQuery_bolim_boshliq->FieldByName("Parol")->AsString == Parol->Text)
   {
   bor = true;
   break;
  }
  ADOQuery_bolim_boshliq->Next();
 }
  if(bor)
   ShowMessage("Bunday Login va Parolga ega bo'lgan bo'lim boshlig'i bor!!!");
 }
 else{
  Form_Bolim_boshliqlari->ADOQuery1->Post();
  ShowMessage("Bo'lim boshliqlari haqidagi malumot O'zgartirildi");
 }
 }
 if(Shifokorlar_haqida_malumot->Checked == true)
 {
 Form_Shifokorlar_haqida->ADOQuery1->Open();
 Form_Shifokorlar_haqida->ADOQuery1->Insert();
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Familiya")->AsString             = Familiyasi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Ismi")->AsString                 = Ismi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Otasini_ismi")->AsString         = Otasini_Ismi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Tugilgan_kun_oy_yil")->AsString  = Tug_kun_oy_yil->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Lavozimi")->AsString             = Lavozimi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Login")->AsString                = Login->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Parol")->AsString                = Parol->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Ishga_kelishi")->AsString        = Ishga_kelish_vaqti->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Ishdan_ketishi")->AsString       = Ishdan_ketish_vaqti->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Ish_haqqi")->AsString            = Ish_haqqi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Telefon_nomeri")->AsString       = Telefon_nomer->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Pasport_raqami")->AsString       = Pasport_raqami->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Ish_faoliyati")->AsString        = Ish_faoliyati->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Yashash_manzili")->AsString      = Yashash_manzili->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Bolim_nomi")->AsString           = Bolim_nomi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Jinsi")->AsString                = Jinsi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Bolim_i_d")->AsString            = Shikorlar_Login_va_Parol->Edit3->Text;
   ADOQuery_Shifokor->First();
 while(!ADOQuery_Shifokor->Eof){
  if (ADOQuery_Shifokor->FieldByName("Login")->AsString == Login->Text && ADOQuery_Shifokor->FieldByName("Parol")->AsString == Parol->Text)
  {
   bor = true;
   break;
  }
  ADOQuery_Shifokor->Next();
 }
 if (!bor) {
  Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Login")->AsString                = Login->Text;
  Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Parol")->AsString                = Parol->Text;
   Form_Shifokorlar_haqida->ADOQuery1->Post();
  ShowMessage("Shifokorlar haqidagi malumotlar saqlandi");
 }else
 {
	 ShowMessage("Bunday Login va Parolga ega bo'lgan bo'lim boshlig'i bor!!!");
 }
 }
 if(Shifokorlar->Checked == true)
{
 Form_Shifokorlar_haqida->ADOQuery1->Open();
 Form_Shifokorlar_haqida->ADOQuery1->Edit();
 log = Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Login")->AsString;
 par = Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Parol")->AsString;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Familiya")->AsString             = Familiyasi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Ismi")->AsString                 = Ismi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Otasini_ismi")->AsString         = Otasini_Ismi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Tugilgan_kun_oy_yil")->AsString  = Tug_kun_Edit->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Lavozimi")->AsString             = Lavozimi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Login")->AsString                = Login->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Parol")->AsString                = Parol->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Ishga_kelishi")->AsString        = Ishga_kelish_vaqti->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Ishdan_ketishi")->AsString       = Ishdan_ketish_vaqti->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Ish_haqqi")->AsString            = Ish_haqqi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Telefon_nomeri")->AsString       = Telefon_nomeri->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Pasport_raqami")->AsString       = Pasporti->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Ish_faoliyati")->AsString        = Ish_faoliyati->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Yashash_manzili")->AsString      = Yashash_manzili->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Bolim_nomi")->AsString           = Bolim_nomi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Jinsi")->AsString                = Jins->Text;
 if (log != Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Login")->AsString || par != Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Parol")->AsString) {
  ADOQuery_Shifokor->First();
 while(!ADOQuery_Shifokor->Eof){
 if (ADOQuery_Shifokor->FieldByName("Login")->AsString == Login->Text && ADOQuery_Shifokor->FieldByName("Parol")->AsString == Parol->Text)
   {
   bor = true;
   break;
  }
  ADOQuery_Shifokor->Next();
 }
  if(bor)
   ShowMessage("Bunday Login va Parolga ega bo'lgan shifokor bor!!!");
 }
 else{
  Form_Shifokorlar_haqida->ADOQuery1->Post();
  ShowMessage("Shifokorlar haqidagi malumot O'zgartirildi");
 }
 }
 if(Shifokorlar_bolim_boshligi_uchun->Checked == true)
{
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->Open();
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->Edit();
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Familiya")->AsString             = Familiyasi->Text;
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Ismi")->AsString                 = Ismi->Text;
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Otasini_ismi")->AsString         = Otasini_Ismi->Text;
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Tugilgan_kun_oy_yil")->AsString  = Tug_kun_Edit->Text;
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Lavozimi")->AsString             = Lavozimi->Text;
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Login")->AsString                = Login->Text;
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Parol")->AsString                = Parol->Text;
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Ishga_kelishi")->AsString        = Ishga_kelish_vaqti->Text;
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Ishdan_ketishi")->AsString       = Ishdan_ketish_vaqti->Text;
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Ish_haqqi")->AsString            = Ish_haqqi->Text;
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Telefon_nomeri")->AsString       = Telefon_nomeri->Text;
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Pasport_raqami")->AsString       = Pasporti->Text;
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Ish_faoliyati")->AsString        = Ish_faoliyati->Text;
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Yashash_manzili")->AsString      = Yashash_manzili->Text;
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Bolim_nomi")->AsString           = Bolim_nomi->Text;
 Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Jinsi")->AsString                = Jins->Text;
  if (log != Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Login")->AsString || par != Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->FieldByName("Parol")->AsString) {
  ADOQuery_Shifokor->First();
 while(!ADOQuery_Shifokor->Eof){
 if (ADOQuery_Shifokor->FieldByName("Login")->AsString == Login->Text && ADOQuery_Shifokor->FieldByName("Parol")->AsString == Parol->Text)
   {
   bor = true;
   break;
  }
  ADOQuery_Shifokor->Next();
 }
  if(bor)
   ShowMessage("Bunday Login va Parolga ega bo'lgan shifokor bor!!!");
 }
 else{
  Form_Shifokorlar_bolim_boshligi_uchun->ADOQuery1->Post();
  ShowMessage("Shifokorlar haqidagi malumot O'zgartirildi");
 }
 }
 if(Bolim_boshliqlari->Checked == true)
 {
 Form_Bolim_boshliqlari->ADOQuery1->Open();
 Form_Bolim_boshliqlari->ADOQuery1->Insert();
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Familiya")->AsString             = Familiyasi->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Ismi")->AsString                 = Ismi->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Otasini_ismi")->AsString         = Otasini_Ismi->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Tugilgan_kun_oy_yil")->AsString  = Tug_kun_oy_yil->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Lavozimi")->AsString             = Lavozimi->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Ishga_kelishi")->AsString        = Ishga_kelish_vaqti->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Ishdan_ketishi")->AsString       = Ishdan_ketish_vaqti->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Ish_haqqi")->AsString            = Ish_haqqi->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Telefon_nomeri")->AsString       = Telefon_nomer->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Pasport_raqami")->AsString       = Pasport_raqami->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Ish_faoliyati")->AsString        = Ish_faoliyati->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Yashash_manzili")->AsString      = Yashash_manzili->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Bolim_nomi")->AsString           = Bolim_nomi->Text;
 Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Jinsi")->AsString                = Jinsi->Text;
  ADOQuery_bolim_boshliq->First();
 while(!ADOQuery_bolim_boshliq->Eof){
  if (ADOQuery_bolim_boshliq->FieldByName("Login")->AsString == Login->Text && ADOQuery_bolim_boshliq->FieldByName("Parol")->AsString == Parol->Text)
  {
   bor = true;
   break;
  }
  ADOQuery_bolim_boshliq->Next();
 }
 if (!bor) {
  Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Login")->AsString                = Login->Text;
  Form_Bolim_boshliqlari->ADOQuery1->FieldByName("Parol")->AsString                = Parol->Text;
   Form_Bolim_boshliqlari->ADOQuery1->Post();
  ShowMessage("Bo'lim boshliqlari haqidagi malumotlar saqlandi");
 }else
 {
	 ShowMessage("Bunday Login va Parolga ega bo'lgan bo'lim boshlig'i bor!!!");
 }
 }
 if(Shifoxona_boshligi->Checked == true)
 {
 bor = false;
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->Open();
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->Edit();
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->FieldByName("Familiya")->AsString             = Familiyasi->Text;
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->FieldByName("Ismi")->AsString                 = Ismi->Text;
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->FieldByName("Otasini_ismi")->AsString         = Otasini_Ismi->Text;
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->FieldByName("Tugilgan_kun_oy_yil")->AsString  = Tug_kun_Edit->Text;
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->FieldByName("Lavozimi")->AsString             = Lavozimi->Text;
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->FieldByName("Login")->AsString                = Login->Text;
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->FieldByName("Parol")->AsString                = Parol->Text;
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->FieldByName("Ishga_kelishi")->AsString        = Ishga_kelish_vaqti->Text;
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->FieldByName("Ishdan_ketishi")->AsString       = Ishdan_ketish_vaqti->Text;
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->FieldByName("Ish_haqqi")->AsString            = Ish_haqqi->Text;
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->FieldByName("Telefon_nomeri")->AsString       = Telefon_nomeri->Text;
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->FieldByName("Pasport_raqami")->AsString       = Pasporti->Text;
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->FieldByName("Ish_faoliyati")->AsString        = Ish_faoliyati->Text;
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->FieldByName("Yashash_manzili")->AsString      = Yashash_manzili->Text;
 Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->FieldByName("Jinsi")->AsString                = Jinsi->Text;
  Shikorlar_Login_va_Parol->ADOQuery_Direktor_malumotlari->Post();
  ShowMessage("Shifoxona boshlig'i haqidagi malumot saqlandi");

 }
 if (!bor){
  Familiyasi->Text = "";
  Ismi->Text = "";
  Otasini_Ismi->Text = "";
  Tug_kun_Edit->Text = "";
  Lavozimi->Text = "";
  Login->Text = "";
  Parol->Text = "";
  Ishga_kelish_vaqti->Text = "";
  Ishdan_ketish_vaqti->Text = "";
  Ish_haqqi->Text = "";
  Telefon_nomeri->Text = "";
  Pasporti->Text = "";
  Ish_faoliyati->Text = "";
  Yashash_manzili->Text = "";
  Bolim_nomi->Text = "";
  Jins->Text = "";
  Tug_kun_oy_yil->Text = "";
  Telefon_nomer->Text = "";
  Pasport_raqami->Text = "";
 }
}
//---------------------------------------------------------------------------
void __fastcall TShifokorlar_haqida_malumot_toldirish::FormActivate(TObject *Sender)
{
  Familiyasi->SetFocus();
}
//---------------------------------------------------------------------------





void __fastcall TShifokorlar_haqida_malumot_toldirish::FormClose(TObject *Sender,
		  TCloseAction &Action)
{
  Familiyasi->Text = "";
  Ismi->Text = "";
  Otasini_Ismi->Text = "";
  Tug_kun_Edit->Text = "";
  Lavozimi->Text = "";
  Login->Text = "";
  Parol->Text = "";
  Ishga_kelish_vaqti->Text = "";
  Ishdan_ketish_vaqti->Text = "";
  Ish_haqqi->Text = "";
  Telefon_nomeri->Text = "";
  Pasporti->Text = "";
  Ish_faoliyati->Text = "";
  Yashash_manzili->Text = "";
  Bolim_nomi->Text = "";
  Jins->Text = "";
  Tug_kun_oy_yil->Text = "";
  Telefon_nomer->Text = "";
  Pasport_raqami->Text = "";
  if(Shifoxona_boshligi->Checked == true)
  {
	  Form1->Show();
  }
}
//---------------------------------------------------------------------------



