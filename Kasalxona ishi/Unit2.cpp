//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit13.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TShifokorlar_malumotlarni_ozgartirish *Shifokorlar_malumotlarni_ozgartirish;
//---------------------------------------------------------------------------
__fastcall TShifokorlar_malumotlarni_ozgartirish::TShifokorlar_malumotlarni_ozgartirish(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TShifokorlar_malumotlarni_ozgartirish::SpeedButton1Click(TObject *Sender)

{
 Form_Shifokorlar_haqida->ADOQuery1->Open();
 Form_Shifokorlar_haqida->ADOQuery1->Edit();
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Familiya")->AsString = Familiyasi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Ismi")->AsString = Ismi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Otasini_ismi")->AsString = Otasini_Ismi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Lavozimi")->AsString = Lavozimi->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Login")->AsString = Login->Text;
 Form_Shifokorlar_haqida->ADOQuery1->FieldByName("Tugilgan_kun_oy_yil")->AsString = Tugilgan_kun_oy_yil->Text;

}
//---------------------------------------------------------------------------

