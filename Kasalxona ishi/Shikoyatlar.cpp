//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Shikoyatlar.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Font1Click(TObject *Sender)
{
  FontDialog1->Font->Assign(RichEdit1->SelAttributes);
  if(FontDialog1->Execute())
  {
   RichEdit1->SelAttributes->Assign(FontDialog1->Font);
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Chiqish1Click(TObject *Sender)
{
  Form5->Close();
}
//---------------------------------------------------------------------------

