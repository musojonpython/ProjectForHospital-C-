//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit11.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "Word_XP_srvr"
#pragma resource "*.dfm"
TForm_Word_uchun *Form_Word_uchun;
//---------------------------------------------------------------------------
__fastcall TForm_Word_uchun::TForm_Word_uchun(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm_Word_uchun::Button1Click(TObject *Sender)
{

	/*OleVariant Template = EmptyParam();
	OleVariant NewTemplate = False;
	OleVariant ItemIndex = 1;
	try{
	WordApplication1->Connect();
	}
	catch(...)
	{
	Application->MessageBoxA(L"Microsoft Word o'rnatilmagan ", L"Error", MB_OK|MB_ICONSTOP);
	return;
	}
	Form_Shifokor->ADOQuery1->Open();
	Form_Shifokor->ADOQuery1->Edit();
	WordApplication1->Documents->Add(Template, NewTemplate);
	WordDocument1->ConnectTo(WordApplication1->Documents->Item(ItemIndex));
	UnicodeString Line;
	Line += "                     Kilinika <<ATLANT MED SERVICE>>";
	Line += "\n";
	Line += "                     Telefon: (+99871)225-62-62, (+99897)400-81-81";
	Line += "\n";
	Line += "                               Medisinskiy usluga  ";
	Line += "\n";
	Line += "                             Labaratoriya malumotlari";
	Line += "\n";
	WordFont1->ConnectTo(WordDocument1->Sentences->get_Last()->get_Font());
	WordFont1->GetDefaultInterface()->Size = 16;
	WordFont1->GetDefaultInterface()->Bold = 20;
	Line += "Bemor Familiyasi ";
	Line += Form_Shifokor->ADOQuery1->FieldByName("Familliya")->AsString;
	Line += "  Ismi  ";
	Line += Form_Shifokor->ADOQuery1->FieldByName("Ismi")->AsString;
	Line += "\n";
	Line += "Diagnoz ";
	Line += Form_Shifokor->ADOQuery1->FieldByName("Qabul_qilingan_tekshiruv")->AsString;
	Line += "\n";
	Line += "Shifokor ismi ";
	Line += Form_Shifokor->ADOQuery1->FieldByName("Davolash_shifokori")->AsString;	Line += "\n";
	Line += "Shikoyatlar ";
	Line += Form_Shifokor->ADOQuery1->FieldByName("Shikoyatlar_kasallik_tarixi")->AsString;
	WordDocument1->Range(EmptyParam(), EmptyParam())->InsertAfter(StringToOleStr(Line));
	WordApplication1->GetDefaultInterface()->Visible = True;
	WordApplication1->Disconnect();
	*/
}
//---------------------------------------------------------------------------




