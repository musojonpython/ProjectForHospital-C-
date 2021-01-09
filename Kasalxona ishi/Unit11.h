//---------------------------------------------------------------------------

#ifndef Unit11H
#define Unit11H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include "Word_XP_srvr.h"
#include <OleServer.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm_Word_uchun : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm_Word_uchun(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm_Word_uchun *Form_Word_uchun;
//---------------------------------------------------------------------------
#endif
