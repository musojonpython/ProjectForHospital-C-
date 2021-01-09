//---------------------------------------------------------------------------

#ifndef ShikoyatlarH
#define ShikoyatlarH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ComCtrls.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Saqlash1;
	TMenuItem *Font1;
	TMenuItem *Chiqish1;
	TRichEdit *RichEdit1;
	TFontDialog *FontDialog1;
	void __fastcall Font1Click(TObject *Sender);
	void __fastcall Chiqish1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
