//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
String i_d = "";
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::ComboBox1Change(TObject *Sender)
{
   String par = "";
   i_d = "";
   par = ComboBox1->Text;
   Form1->ADOQuery2->Open();
   Form1->ADOQuery2->First();
   while (!Form1->ADOQuery2->Eof){
   if (Form1->ADOQuery2->FieldByName("���������")->AsString == par) {
		 Memo1->Text = Form1->ADOQuery2->FieldByName("�����������_��������")->AsString;
		 i_d = Form1->ADOQuery2->FieldByName("i_d")->AsString;
   }
   Form1->ADOQuery2->Next();
   }
   Form1->ADOQuery2->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
	 Form2->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::SpeedButton1Click(TObject *Sender)
{
  ADOQuery1->Open();
  ADOQuery1->Insert();
  ADOQuery1->FieldByName("Murojat_i_d")->AsString = Form1->Edit1->Text;
  ADOQuery1->FieldByName("Analiz_i_d")->AsString = i_d;
  ADOQuery1->FieldByName("Natija")->AsString = LabeledEdit2->Text;
  ShowMessage("Malumot saqlandi ");
  LabeledEdit2->Text = "";
  ADOQuery1->Post();
  ADOQuery1->Close();
}
//---------------------------------------------------------------------------


