//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int i_d_bolim_boshliq, i_d_shifokor;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormActivate(TObject *Sender)
{
   Bolim_boshliqlari->Items->Clear();
   ADOQuery_Bolim_boshliqlari->First();
   while(!ADOQuery_Bolim_boshliqlari->Eof){
   Bolim_boshliqlari->Items->Add(ADOQuery_Bolim_boshliqlari->FieldByName("Bolim_nomi")->AsString);
   ADOQuery_Bolim_boshliqlari->Next();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Bolim_boshliqlariChange(TObject *Sender)
{
   String nomi = Bolim_boshliqlari->Text;
   ADOQuery_Bolim_boshliqlari->First();
   while(!ADOQuery_Bolim_boshliqlari->Eof){
   if(ADOQuery_Bolim_boshliqlari->FieldByName("Bolim_nomi")->AsString == nomi){
   i_d_bolim_boshliq = ADOQuery_Bolim_boshliqlari->FieldByName("i_d")->AsInteger;
   break;
   }
   ADOQuery_Bolim_boshliqlari->Next();
   }
   Shifokorlar->Items->Clear();
   ADOQuery_Shifokorlar->First();
   while(!ADOQuery_Shifokorlar->Eof){
   if(ADOQuery_Shifokorlar->FieldByName("Bolim_i_d")->AsInteger == i_d_bolim_boshliq){
   Shifokorlar->Items->Add(ADOQuery_Shifokorlar->FieldByName("Familiya")->AsString);
   }
   ADOQuery_Shifokorlar->Next();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
	 ADOQuery_Bemorlar->Open();
	 ADOQuery_Bemorlar->Insert();
	 ADOQuery_Bemorlar->FieldByName("Familliya")->AsString =  Familiya->Text;
	 ADOQuery_Bemorlar->FieldByName("Ismi")->AsString =  Ismi->Text;
	 ADOQuery_Bemorlar->FieldByName("Kasalxonaga_kelgan_kuni")->AsString =  MaskEdit2->Text;
	 ADOQuery_Bemorlar->FieldByName("Kasalxonadan_chiqarilgan_vaqti")->AsString =  MaskEdit1->Text;
	 ADOQuery_Bemorlar->FieldByName("Bolim_id")->AsString =  i_d_bolim_boshliq;
	 ADOQuery_Bemorlar->FieldByName("Shifokor_id")->AsString =  i_d_shifokor;
//	 ADOQuery_Bemorlar->Close();
	 ADOQuery_Bemorlar->Post();
	 ShowMessage("Malumot saqlandi");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
  Label6->Caption = DateToStr(Date());
  Label5->Caption = TimeToStr(Time());
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ShifokorlarChange(TObject *Sender)
{
  String nomi = Shifokorlar->Text;
  ADOQuery_Shifokorlar->First();
  while(!ADOQuery_Shifokorlar->Eof){
  if (ADOQuery_Shifokorlar->FieldByName("Familiya")->AsString == nomi) {
	i_d_shifokor = ADOQuery_Shifokorlar->FieldByName("i_d")->AsInteger;
  }
  ADOQuery_Shifokorlar->Next();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
   Form1->Close();
}
//---------------------------------------------------------------------------

