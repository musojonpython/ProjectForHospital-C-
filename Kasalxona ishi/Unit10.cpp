//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit10.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TLabaratoriya_ishi *Labaratoriya_ishi;
String sana = "", murojat_i_d = "", analiz_i_d = "", analiz_nom_i_d = "", analiz_nomi = "", analiz_turi_i_d = "";
int a[1000], k = 0, index;
//---------------------------------------------------------------------------
__fastcall TLabaratoriya_ishi::TLabaratoriya_ishi(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TLabaratoriya_ishi::ComboBox1Change(TObject *Sender)
{
	sana = ComboBox1->Text;
	ADOQuery_Bemor_murojat->First();
	while (!ADOQuery_Bemor_murojat->Eof){
	 if (ADOQuery_Bemor_murojat->FieldByName("Murojat_sana")->AsString == sana) {
		murojat_i_d = ADOQuery_Bemor_murojat->FieldByName("i_d")->AsString;
	 }
	 ADOQuery_Bemor_murojat->Next();
	}
	ADOQuery_Bemor_Analiz->First();
	while(!ADOQuery_Bemor_Analiz->Eof){
	if (ADOQuery_Bemor_Analiz->FieldByName("Murojat_i_d")->AsString == murojat_i_d) {
	 analiz_i_d = ADOQuery_Bemor_Analiz->FieldByName("Analiz_i_d")->AsString;
	 a[k++] = ADOQuery_Bemor_Analiz->FieldByName("i_d")->AsInteger;
	 ADOQuery_Analiz_nomlari->First();
	 while(!ADOQuery_Analiz_nomlari->Eof){
	 if (ADOQuery_Analiz_nomlari->FieldByName("i_d")->AsString == analiz_i_d) {
	 ComboBox2->Items->Add(ADOQuery_Analiz_nomlari->FieldByName("���������")->AsString);
	 }
	 ADOQuery_Analiz_nomlari->Next();
	 }
	}
	ADOQuery_Bemor_Analiz->Next();
	}
}
//---------------------------------------------------------------------------

void __fastcall TLabaratoriya_ishi::ComboBox2Change(TObject *Sender)
{
	analiz_nomi = ComboBox2->Text;
	index = ComboBox2->ItemIndex;
	ADOQuery_Analiz_nomlari->First();
	 while(!ADOQuery_Analiz_nomlari->Eof){
	 if (ADOQuery_Analiz_nomlari->FieldByName("���������")->AsString == analiz_nomi) {
	 Memo1->Text = (ADOQuery_Analiz_nomlari->FieldByName("�����������_��������")->AsString);
	 analiz_turi_i_d = ADOQuery_Analiz_nomlari->FieldByName("Analiz_turi_i_d")->AsString;
	 ADOQuery_Analiz_turi->First();
	 while(!ADOQuery_Analiz_turi->Eof){
	 if (ADOQuery_Analiz_turi->FieldByName("i_d")->AsString == analiz_turi_i_d) {
	 Edit1->Text = ADOQuery_Analiz_turi->FieldByName("Nomi")->AsString;
	 }
	 ADOQuery_Analiz_turi->Next();
	 }
	 ADOQuery_Bemor_Analiz->First();
	 while(!ADOQuery_Bemor_Analiz->Eof){
	 if (ADOQuery_Bemor_Analiz->FieldByName("i_d")->AsInteger == a[index]) {
	 Edit2->Text = ADOQuery_Bemor_Analiz->FieldByName("Natija")->AsString;
	 }
	 ADOQuery_Bemor_Analiz->Next();
	 }

	 }
	 ADOQuery_Analiz_nomlari->Next();
	 }
}
//---------------------------------------------------------------------------


void __fastcall TLabaratoriya_ishi::SpeedButton1Click(TObject *Sender)
{
	ADOQuery_Bemor_Analiz->Close();
	ADOQuery_Bemor_Analiz->Open();
	ADOQuery_Bemor_murojat->Close();
	ADOQuery_Bemor_murojat->Open();
	ADOQuery_Analiz_nomlari->Close();
	ADOQuery_Analiz_nomlari->Open();
	ADOQuery_Analiz_turi->Close();
	ADOQuery_Analiz_turi->Open();
	ShowMessage("Malumotlar qayta yuklandi");
}
//---------------------------------------------------------------------------

