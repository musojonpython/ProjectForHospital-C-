//---------------------------------------------------------------------------

#ifndef Unit12H
#define Unit12H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include "Unit13.h"
#include "Unit20.h"
#include "Unit5.h"
#include "Unit8.h"
#include "Unit16.h"
//---------------------------------------------------------------------------
class TShikorlar_Login_va_Parol : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label1;
	TLabeledEdit *LabeledEdit1;
	TLabeledEdit *LabeledEdit2;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TEdit *Edit1;
	TEdit *Edit2;
	TADOQuery *ADOQuery1;
	TADOQuery *ADOQuery_Bolim_boligi;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton1;
	TSpeedButton *SpeedButton3;
	TEdit *Edit3;
	TADOQuery *ADOQuery_Shifokor;
	TADOQuery *ADOQuery_Direktor;
	TRadioGroup *RadioGroup1;
	TADOQuery *ADOQuery_Direktor_malumotlari;
	TSpeedButton *SpeedButton4;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TShikorlar_Login_va_Parol(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TShikorlar_Login_va_Parol *Shikorlar_Login_va_Parol;
//---------------------------------------------------------------------------
#endif
