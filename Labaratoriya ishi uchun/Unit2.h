//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <Buttons.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include "Unit1.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TSpeedButton *SpeedButton1;
	TADOQuery *ADOQuery1;
	TADOConnection *ADOConnection1;
	TDataSource *DataSource1;
	TDBGrid *DBGrid1;
	TADOQuery *ADOQuery2;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	TEdit *Edit1;
	TSpeedButton *SpeedButton4;
	TADOQuery *ADOQuery_bolim_boshliqlari;
	TADOQuery *ADOQuery_Shifokorlar;
	TPanel *Panel2;
	TComboBox *ComboBox_bolim_nomi;
	TLabel *Label22;
	TComboBox *ComboBox_Shifokor;
	TLabel *Label23;
	TLabeledEdit *LabeledEdit1;
	TLabeledEdit *LabeledEdit2;
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall LabeledEdit1Change(TObject *Sender);
	void __fastcall LabeledEdit2Change(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall ComboBox_ShifokorChange(TObject *Sender);
	void __fastcall DBGrid1TitleClick(TColumn *Column);
	void __fastcall ComboBox_bolim_nomiChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
