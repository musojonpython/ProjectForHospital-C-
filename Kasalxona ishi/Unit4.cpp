//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormActivate(TObject *Sender)
{
  Xotima->Visible = false;
  Qabulxona->Visible = false;
  Shikoyatlar->Visible = false;
  Kundalik->Visible = false;
  Patomorfolog->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
	if(RadioButton1->Checked == true){
		 Kundalik->Visible = true;
		 Xotima->Visible = false;
		 Qabulxona->Visible = false;
		 Shikoyatlar->Visible = false;
		 Patomorfolog->Visible = false;
	}
	if(RadioButton2->Checked == true){

	}
	if(RadioButton3->Checked == true){

	}
	if(RadioButton4->Checked == true){

	}
	if(RadioButton5->Checked == true){
	
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::RadioButton1Click(TObject *Sender)
{
		 Kundalik->Visible = true;
		 Xotima->Visible = false;
		 Qabulxona->Visible = false;
		 Shikoyatlar->Visible = false;
		 Patomorfolog->Visible = false;
		 Form4->Caption = "Kundalik ";
}
//---------------------------------------------------------------------------

void __fastcall TForm4::RadioButton2Click(TObject *Sender)
{
		Patomorfolog->Visible = true;
		Xotima->Visible = false;
		Qabulxona->Visible = false;
		Shikoyatlar->Visible = false;
		Kundalik->Visible = false;
		Form4->Caption = "Patomorfalog malumotlarini to'ldirish";
}
//---------------------------------------------------------------------------

void __fastcall TForm4::RadioButton3Click(TObject *Sender)
{
	 Qabulxona->Visible = true;
	 Xotima->Visible = false;
	 Shikoyatlar->Visible = false;
	 Kundalik->Visible = false;
	 Patomorfolog->Visible = false;
	 Form4->Caption = "Qabulxona shifokorining yozuvi malumotlarini to'ldirish";
}
//---------------------------------------------------------------------------

void __fastcall TForm4::RadioButton4Click(TObject *Sender)
{
	   Form4->Caption = "Shikoyatlar va Kasallik tarixi haqida malumotlarini to'ldirish";
	   Shikoyatlar->Visible = true;
		Xotima->Visible = false;
		Qabulxona->Visible = false;
		Kundalik->Visible = false;
		Patomorfolog->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::RadioButton5Click(TObject *Sender)
{
		 Form4->Caption = "Xotima malumotlarini to'ldirish";
		 Xotima->Visible = true;
		 Qabulxona->Visible = false;
		 Shikoyatlar->Visible = false;
		 Kundalik->Visible = false;
		 Patomorfolog->Visible = false;
}
//---------------------------------------------------------------------------


