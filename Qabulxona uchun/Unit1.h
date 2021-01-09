//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabeledEdit *Familiya;
	TLabeledEdit *Ismi;
	TLabel *Label1;
	TMaskEdit *MaskEdit1;
	TLabel *Label2;
	TComboBox *Bolim_boshliqlari;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery_Bolim_boshliqlari;
	TADOQuery *ADOQuery_Shifokorlar;
	TComboBox *Shifokorlar;
	TLabel *Label3;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TADOQuery *ADOQuery_Bemorlar;
	TLabel *Label4;
	TMaskEdit *MaskEdit2;
	TTimer *Timer1;
	TLabel *Label12;
	TLabel *Label6;
	TMonthCalendar *MonthCalendar1;
	TLabel *Label7;
	TLabel *Label5;
	TDataSource *DataSource1;
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall Bolim_boshliqlariChange(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall ShifokorlarChange(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
