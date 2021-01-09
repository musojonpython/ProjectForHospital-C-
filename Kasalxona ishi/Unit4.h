//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Kundalik;
	TRichEdit *RichEdit1;
	TPanel *Xotima;
	TRichEdit *RichEdit2;
	TPanel *Shikoyatlar;
	TRichEdit *RichEdit3;
	TPanel *Qabulxona;
	TRichEdit *RichEdit5;
	TPanel *Patomorfolog;
	TGroupBox *GroupBox1;
	TLabeledEdit *Kasalxonada_qoyilgan_tashhis;
	TLabeledEdit *LabeledEdit1;
	TLabeledEdit *LabeledEdit2;
	TRichEdit *Memo1;
	TLabeledEdit *LabeledEdit3;
	TPanel *Panel1;
	TGroupBox *GroupBox2;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TRadioButton *RadioButton5;
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall RadioButton2Click(TObject *Sender);
	void __fastcall RadioButton3Click(TObject *Sender);
	void __fastcall RadioButton4Click(TObject *Sender);
	void __fastcall RadioButton5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
