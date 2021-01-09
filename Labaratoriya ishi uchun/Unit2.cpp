//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
bool yopiq = true;
int bolim_id, shifokor_id;
  String nomi, fam;
  bool sort;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton1Click(TObject *Sender)
{
		String i_d = "", familiya = "", ism = "";
		Form1->ComboBox1->Items->Clear();
		ADOQuery1->Open();
		ADOQuery1->Edit();
		i_d = ADOQuery1->FieldByName("i_d")->AsString;
		Edit1->Text = i_d;
		familiya = ADOQuery1->FieldByName("Familliya")->AsString;
		ism = ADOQuery1->FieldByName("Ismi")->AsString;
		if (ism != "" && familiya != "") {
		int k = 0;
		Form1->Show();
		Form2->Hide();
		Form1->Caption = familiya + "  " + ism + "ning Labaratoriya malumotlari";
		ADOQuery2->First();
		Form1->ComboBox1->Clear();
		while(!ADOQuery2->Eof){
		if (ADOQuery2->FieldByName("Bemor_i_d")->AsString == i_d) {
		Form1->ComboBox1->Items->Add(ADOQuery2 ->FieldByName("Murojat_sana")->AsString);
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
void __fastcall TForm2::LabeledEdit1Change(TObject *Sender)
{

  if(ComboBox_Shifokor->Text != "" || ComboBox_Shifokor->Text != "----------")
 {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
 ADOQuery1->SQL->Add("where");
 ADOQuery1->SQL->Add(" Familliya LIKE '" + LabeledEdit1->Text + "%'");
 ADOQuery1->SQL->Add(" and Ismi LIKE '" + LabeledEdit2->Text + "%'");
 ADOQuery1->SQL->Add(" and shifokor_id = " + IntToStr(shifokor_id));
 ADOQuery1->SQL->Add(" and bolim_id = " + IntToStr(bolim_id));
 ADOQuery1->Open();

 if (LabeledEdit1->Text == "") {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
 ADOQuery1->SQL->Add("where shifokor_id = " + IntToStr(shifokor_id));
 ADOQuery1->SQL->Add(" and bolim_id = " + IntToStr(bolim_id));
 ADOQuery1->Open();
 }
 }

 if(ComboBox_Shifokor->Text == "" && ComboBox_bolim_nomi->Text == "" || ComboBox_Shifokor->Text == "----------" && ComboBox_bolim_nomi->Text == "----------")
 {
   ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
 ADOQuery1->SQL->Add("where");
 ADOQuery1->SQL->Add(" Familliya LIKE '" + LabeledEdit1->Text + "%'");
 ADOQuery1->SQL->Add(" and Ismi LIKE '" + LabeledEdit2->Text + "%'");
 ADOQuery1->Open();
 if (LabeledEdit1->Text == "" && LabeledEdit2->Text == "") {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
 ADOQuery1->Open();
 }
 }

}
//---------------------------------------------------------------------------
void __fastcall TForm2::LabeledEdit2Change(TObject *Sender)
{

	if(ComboBox_bolim_nomi->Text != "" || ComboBox_bolim_nomi->Text != "----------")
  {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
 ADOQuery1->SQL->Add("where");
 ADOQuery1->SQL->Add(" Familliya LIKE '" + LabeledEdit1->Text + "%'");
 ADOQuery1->SQL->Add(" and Ismi LIKE '" + LabeledEdit2->Text + "%'");
 ADOQuery1->SQL->Add(" and bolim_id = " + IntToStr(bolim_id));
 ADOQuery1->Open();

 if (LabeledEdit2->Text == "") {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
 ADOQuery1->SQL->Add(" where bolim_id = " + IntToStr(bolim_id));
 ADOQuery1->Open();
 }
 }

  if(ComboBox_Shifokor->Text != "" || ComboBox_Shifokor->Text != "----------")
 {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
 ADOQuery1->SQL->Add("where");
 ADOQuery1->SQL->Add(" Familliya LIKE '" + LabeledEdit1->Text + "%'");
 ADOQuery1->SQL->Add(" and Ismi LIKE '" + LabeledEdit2->Text + "%'");
 ADOQuery1->SQL->Add(" and shifokor_id = " + IntToStr(shifokor_id));
 ADOQuery1->SQL->Add(" and bolim_id = " + IntToStr(bolim_id));
 ADOQuery1->Open();

 if (LabeledEdit2->Text == "") {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
 ADOQuery1->SQL->Add("where shifokor_id = " + IntToStr(shifokor_id));
 ADOQuery1->SQL->Add(" and bolim_id = " + IntToStr(bolim_id));
 ADOQuery1->Open();
 }
 }

 if(ComboBox_Shifokor->Text == "" && ComboBox_bolim_nomi->Text == "" || ComboBox_Shifokor->Text == "----------" && ComboBox_bolim_nomi->Text == "----------")
 {
   ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
 ADOQuery1->SQL->Add("where");
 ADOQuery1->SQL->Add(" Familliya LIKE '" + LabeledEdit1->Text + "%'");
 ADOQuery1->SQL->Add(" and Ismi LIKE '" + LabeledEdit2->Text + "%'");
 ADOQuery1->Open();
 if (LabeledEdit1->Text == "" && LabeledEdit2->Text == "") {
 ADOQuery1->Close();
 ADOQuery1->SQL->Clear();
 ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
 ADOQuery1->Open();
 }
 }

}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormActivate(TObject *Sender)
{
	Edit1->Visible = false;
	yopiq = true;
	LabeledEdit1->Visible = true;
	LabeledEdit2->Visible = true;
	Form2->DBGrid1->Columns->Items[55]->Visible = false;
	Form2->DBGrid1->Columns->Items[56]->Visible = false;
	ComboBox_bolim_nomi->Items->Clear();
  ADOQuery_bolim_boshliqlari->First();
  while(!ADOQuery_bolim_boshliqlari->Eof)
  {
  ComboBox_bolim_nomi->Items->Add(ADOQuery_bolim_boshliqlari->FieldByName("Bolim_nomi")->AsString);
  ADOQuery_bolim_boshliqlari->Next();
  }
  ComboBox_bolim_nomi->Items->Add("----------");
 ComboBox_Shifokor->Items->Clear();
   nomi = ComboBox_bolim_nomi->Text;
   if(nomi == "----------"){
	ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
   ADOQuery1->Open();
   }else{
   ADOQuery_bolim_boshliqlari->First();
   while(!ADOQuery_bolim_boshliqlari->Eof)
   {
   if(nomi == ADOQuery_bolim_boshliqlari->FieldByName("bolim_nomi")->AsString)
   {
	   bolim_id = ADOQuery_bolim_boshliqlari->FieldByName("i_d")->AsInteger;
		 break;
   }
   ADOQuery_bolim_boshliqlari->Next();
   }

   ADOQuery_Shifokorlar->Close();
   ADOQuery_Shifokorlar->SQL->Clear();
   ADOQuery_Shifokorlar->SQL->Add("select * from shifokorlar");
   ADOQuery_Shifokorlar->SQL->Add("where bolim_i_d = " + IntToStr(bolim_id));
   ADOQuery_Shifokorlar->Open();

   ADOQuery_Shifokorlar->First();
   if(ComboBox_bolim_nomi->Text != "")
   {
   while(!ADOQuery_Shifokorlar->Eof)
   {  ComboBox_Shifokor->Items->Add(ADOQuery_Shifokorlar->FieldByName("Familiya")->AsString);
	 ADOQuery_Shifokorlar->Next();
   }
   }}
   ComboBox_Shifokor->Items->Add("----------");
   ADOQuery1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SpeedButton2Click(TObject *Sender)
{
  if (yopiq) {
  LabeledEdit1->Visible = true;
  LabeledEdit2->Visible = true;
  yopiq = false;
  }
  else
  {
   LabeledEdit1->Visible = false;
   LabeledEdit2->Visible = false;
   yopiq = true;
  }
  DBGrid1->Columns->Items[55]->Visible = false;
  DBGrid1->Columns->Items[56]->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SpeedButton4Click(TObject *Sender)
{
	ADOQuery1->Close();
	ADOQuery1->Open();
	ADOQuery2->Close();
	ADOQuery2->Open();
	ADOQuery_Shifokorlar->Close();
	ADOQuery_Shifokorlar->Open();
	ADOQuery_bolim_boshliqlari->Close();
	ADOQuery_bolim_boshliqlari->Open();
	ShowMessage("Malumotlar qayta yuklandi");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SpeedButton3Click(TObject *Sender)
{
   Form4->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ComboBox_ShifokorChange(TObject *Sender)
{
	 fam = ComboBox_Shifokor->Text;
	 ADOQuery_Shifokorlar->First();
	 if (fam == "----------") {
	 ADOQuery1->Close();
	 ADOQuery1->SQL->Clear();
	 ADOQuery1->SQL->Add("select * from Bemorlar_haqida ");
	 ADOQuery1->Open();
	 }if (fam != "----------"){
	 if(ComboBox_Shifokor->Text != "")
	 {
	 while(!ADOQuery_Shifokorlar->Eof)
	 {
		 if(fam == ADOQuery_Shifokorlar->FieldByName("Familiya")->AsString)
		 {
		  shifokor_id = ADOQuery_Shifokorlar->FieldByName("i_d")->AsInteger;
		  break;
		 }
		 ADOQuery_Shifokorlar->Next();
	 }
	 }
	 ADOQuery1->Close();
	 ADOQuery1->SQL->Clear();
	 ADOQuery1->SQL->Add("select * from Bemorlar_haqida ");
	 ADOQuery1->SQL->Add("where shifokor_id = " + IntToStr(shifokor_id));
	 ADOQuery1->SQL->Add(" and bolim_id = " + IntToStr(bolim_id));
	 ADOQuery1->Open();
	 }if (fam == "----------" && ComboBox_bolim_nomi->Text != "" && ComboBox_bolim_nomi->Text != "----------"){
	  ADOQuery1->Close();
	 ADOQuery1->SQL->Clear();
	 ADOQuery1->SQL->Add("select * from Bemorlar_haqida ");
	 ADOQuery1->SQL->Add("where bolim_id = " + IntToStr(bolim_id));
	 ADOQuery1->Open();
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::DBGrid1TitleClick(TColumn *Column)
{
	  if(ComboBox_bolim_nomi->Text != "")
	 {
	  ADOQuery1->Close();
	  ADOQuery1->SQL->Clear();
   if (sort) {
		 sort = false;
		 ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
		 ADOQuery1->SQL->Add(" where bolim_id = " + IntToStr(bolim_id));
		 ADOQuery1->SQL->Add("Order by " + Column->FieldName + " DESC");
		 }
   else
   {
	   sort = true;
	   ADOQuery1->SQL->Add("select * from Bemorlar_haqida ");
	   ADOQuery1->SQL->Add(" where bolim_id = " + IntToStr(bolim_id));
	   ADOQuery1->SQL->Add(" Order by " + Column->FieldName + " ASC");
   }
   ADOQuery1->Open();
   }

	 if(ComboBox_Shifokor->Text != "")
	 {
	  ADOQuery1->Close();
	  ADOQuery1->SQL->Clear();
   if (sort) {
		 sort = false;
		 ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
		 ADOQuery1->SQL->Add("where shifokor_id = " + IntToStr(shifokor_id));
		 ADOQuery1->SQL->Add(" and bolim_id = " + IntToStr(bolim_id));
		 ADOQuery1->SQL->Add("Order by " + Column->FieldName + " DESC");

   }
   else
   {
	   sort = true;
	   ADOQuery1->SQL->Add("select * from Bemorlar_haqida ");
	   ADOQuery1->SQL->Add("where shifokor_id = " + IntToStr(shifokor_id));
	   ADOQuery1->SQL->Add(" and bolim_id = " + IntToStr(bolim_id));
	   ADOQuery1->SQL->Add(" Order by " + Column->FieldName + " ASC");
   }
   ADOQuery1->Open();
   }
   if(ComboBox_Shifokor->Text == "" && ComboBox_bolim_nomi->Text == "")
   {
	 ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   if (sort) {
		 sort = false;
		 ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
		 ADOQuery1->SQL->Add("Order by " + Column->FieldName + " DESC");
   }
   else
   {
	   sort = true;
	   ADOQuery1->SQL->Add("select * from Bemorlar_haqida ");
	   ADOQuery1->SQL->Add(" Order by " + Column->FieldName + " ASC");
   }
   ADOQuery1->Open();
   }
}
//---------------------------------------------------------------------------


void __fastcall TForm2::ComboBox_bolim_nomiChange(TObject *Sender)
{
    ComboBox_Shifokor->Items->Clear();
   nomi = ComboBox_bolim_nomi->Text;
   if(nomi == "----------"){
	ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
   ADOQuery1->Open();
   }else{
   ADOQuery_bolim_boshliqlari->First();
   while(!ADOQuery_bolim_boshliqlari->Eof)
   {
   if(nomi == ADOQuery_bolim_boshliqlari->FieldByName("bolim_nomi")->AsString)
   {
	   bolim_id = ADOQuery_bolim_boshliqlari->FieldByName("i_d")->AsInteger;
		 break;
   }
   ADOQuery_bolim_boshliqlari->Next();
   }

   ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Add("select * from Bemorlar_haqida");
   ADOQuery1->SQL->Add("where bolim_id = " + IntToStr(bolim_id));
   ADOQuery1->Open();
   ADOQuery_Shifokorlar->Close();
   ADOQuery_Shifokorlar->SQL->Clear();
   ADOQuery_Shifokorlar->SQL->Add("select * from shifokorlar");
   ADOQuery_Shifokorlar->SQL->Add("where bolim_i_d = " + IntToStr(bolim_id));
   ADOQuery_Shifokorlar->Open();

   ADOQuery_Shifokorlar->First();
   if(ComboBox_bolim_nomi->Text != "")
   {
   while(!ADOQuery_Shifokorlar->Eof)
   {  ComboBox_Shifokor->Items->Add(ADOQuery_Shifokorlar->FieldByName("Familiya")->AsString);
	 ADOQuery_Shifokorlar->Next();
   }
   }}
   ComboBox_Shifokor->Items->Add("----------");
}
//---------------------------------------------------------------------------

