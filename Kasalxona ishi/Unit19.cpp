//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit19.h"
#include "Unit16.h"
#include "Unit6.h"
#include "Shikoyatlar.h"
#include "Unit4.h"
#include "Unit10.h"
#include "Unit8.h"
#include "Unit8_Kundalik.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm_Bemorlarni_malumotini_ozgartirish *Form_Bemorlarni_malumotini_ozgartirish;
//---------------------------------------------------------------------------
__fastcall TForm_Bemorlarni_malumotini_ozgartirish::TForm_Bemorlarni_malumotini_ozgartirish(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm_Bemorlarni_malumotini_ozgartirish::Button3Click(TObject *Sender)

{
  Kundalik->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Bemorlarni_malumotini_ozgartirish::Button4Click(TObject *Sender)

{
   Xotima->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Bemorlarni_malumotini_ozgartirish::Button1Click(TObject *Sender)

{
  Form4->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Bemorlarni_malumotini_ozgartirish::Button2Click(TObject *Sender)

{
   Form5->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Bemorlarni_malumotini_ozgartirish::Button5Click(TObject *Sender)

{
	Patologoanatom_xulosasi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm_Bemorlarni_malumotini_ozgartirish::SpeedButton1Click(TObject *Sender)

{
   Form_Shifokor->ADOQuery1->Open();
   Form_Shifokor->ADOQuery1->Edit();
   Form_Shifokor->ADOQuery1->FieldByName("Kasalxonaga_kelgan_kuni")->AsString = Kasalxonaga_yotqizilgan_sana->Date;
   Form_Shifokor->ADOQuery1->FieldByName("Kasalxonaga_kelgan_vaqti")->AsString = Kasalxonaga_yotqizilgan_vaqt->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Kasalxonadan_chiqarilgan_kun")->AsString = Kasalxonadan_chiqarilgan_kun->Date;
   Form_Shifokor->ADOQuery1->FieldByName("Kasalxonadan_chiqarilgan_vaqti")->AsString = Kasalxonadan_chiqarilgan_vaqt->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Xona")->AsString = Xona->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Qaysi_bolimga_otkazilgan")->AsString = Qaysi_bolimga_otkazildi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Necha_kun_yotib_davolangan")->AsString = Necha_kun_yotib_davolangan->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Bemorni_olib_yurish_turlari")->AsString = Bemorni_olib_yurish_turlari->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Qon_guruhi")->AsString = Qon_guruhi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Rezus_mansubligi")->AsString = Rezus_mansubligi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Dorilarning_nojoya_tasiri")->AsString = Dorilarning_nojoya_tasiri->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Familliya")->AsString = Familiyasi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Ismi")->AsString =      Ismi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Jinsi")->AsString =     JInsi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Yoshi")->AsString =     Yoshi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Doimiy_yashash_joyi")->AsString = Doimiy_yashash_joyi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Ish_joyi_kasbi_lavozimi")->AsString = Ish_joyi_kasbi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Bemor_qayerdan_yuborilgan")->AsString = Bemor_qayerdan_yuborilgan->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Kasalxonaga_shoshilinch_ravishda_keltirilgan")->AsString = Holati->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Qanday_transportda")->AsString = qanday_transportda->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Bemor_yollanmasidagi_tashxis")->AsString = bemor_yollanmasidagi_tashhisi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Qabulxonada_qoyilgan_tashxis")->AsString = Qabulxonada_qoyilgan_tashhis->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Kasalxonada_qoyilgan_tashxis")->AsString = Kasalxonada_qoyilgan_tashhis->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Asosiy")->AsString = Asosiy->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Asosiy_kasallikning_asorati")->AsString = Asosiy_kasallik_asorati->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Aniqlangan_xamrox_kasalliklar")->AsString = Aniqlangan_xamroh_kasalliklr->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Kasalxonada_yotishi")->AsString = Kasalxonaga_yotishi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Hammasi_bolib")->AsString = Hammasi_bolib->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Operatsiya_nomi")->AsString = Operasiya_nomi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Operatsiya_qiluvchi")->AsString = Operasiya_qiluvchi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Davolashning_boshqa_turlari")->AsString = Davolashning_boshqa_turlari->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Mehnatga_yaroqsizlik_varogi_yoki_malumotnoma")->AsString = Mexnatga_yaroqsizlik_varogi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Davolash_natijasi")->AsString = Davolash_natijasi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Ekspertizaga_yuborish_uchun_xulosa")->AsString = Ekspertizaga_yuborish_uchun->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Alohida_belgilar")->AsString = Alohida_belgilari->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Qabul_qilingan_tekshiruv")->AsString = Qabul_qilinganda_tekshirildi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Davolash_shifokori")->AsString = Davolash_shifokori->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Bolim_mudiri")->AsString = Bolim_mudiri->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Qabulxona_shifokorining_yozuvi")->AsString = Form4->Qabulxona_shifokori_yozuvi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Shikoyatlar_kasallik_tarixi")->AsString = Form5->RichEdit1->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Xotima")->AsString = Xotima->Qabulxona_shifokori_yozuvi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Patologoanatom_xulosasi")->AsString = Patologoanatom_xulosasi->Memo1->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Patologoanatom_xulosasi_asosiy")->AsString = Patologoanatom_xulosasi->Kasalxonada_qoyilgan_tashhis->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Muassasaning_nomi")->AsString = Muassasaning_nomi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Muassasa_kodi")->AsString = Muassasaning_kodi->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Kasallik_aniqlangan_sana")->AsString = Kasallik_aniqlangan_sana->Date;
   Form_Shifokor->ADOQuery1->FieldByName("Operatsiya_vaqt_soati")->AsString = Operatsiya_Vaqti->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Operatsiyada_ogriqsizlantiruvchi_usul")->AsString = Ogriqsizlantirish_usuli->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Operatsiya_asoratlari")->AsString = Asoratlar->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Patologoanatom_asosiy_kasallik")->AsString = Patologoanatom_xulosasi->LabeledEdit1->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Patologoanatom_Yoldosh_kassalliklar")->AsString = Patologoanatom_xulosasi->LabeledEdit2->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Patologoanatom_shifokor_ismi")->AsString = Patologoanatom_xulosasi->LabeledEdit3->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Kundalik")->AsString = Kundalik->RichEdit1->Text;
   Form_Shifokor->ADOQuery1->FieldByName("Xona")->AsString = Xona->Text;
   Form_Shifokor->ADOQuery1->Post();
   ShowMessage("Malumotlar o'zgartirildi");
}
//---------------------------------------------------------------------------

void __fastcall TForm_Bemorlarni_malumotini_ozgartirish::SpeedButton2Click(TObject *Sender)

{
	if(MessageDlg("Chiqishni xohlaysizmi?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
  {
  Form_Bemorlarni_malumotini_ozgartirish->Close();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm_Bemorlarni_malumotini_ozgartirish::FormClose(TObject *Sender,
          TCloseAction &Action)
{
  	if(MessageDlg("Chiqishni xohlaysizmi?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
  {
      Close();
  }
}
//---------------------------------------------------------------------------

