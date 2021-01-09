//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <DBCtrls.hpp>
#include <Menus.hpp>
#include <ComCtrls.hpp>
#include <Mask.hpp>
#include "Unit10.h"
#include "Unit17.h"
//---------------------------------------------------------------------------
class TForm_Shifokor : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton6;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton9;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery1;
	TPanel *Panel3;
	TDataSource *DataSource1;
	TSpeedButton *SpeedButton11;
	TDBGrid *DBGrid1;
	TSpeedButton *SpeedButton3;
	TSplitter *Splitter1;
	TSpeedButton *SpeedButton4;
	TMainMenu *MainMenu1;
	TMenuItem *File1;
	TMenuItem *Malumotqoshish2;
	TMenuItem *Malumotchiqarish2;
	TMenuItem *Wordchiqarish1;
	TMenuItem *Jadvalkorinishidachiqarish1;
	TMenuItem *Malumotochirish1;
	TMenuItem *Malumotlarinikorsatish1;
	TMenuItem *N2;
	TMenuItem *Chiqish2;
	TMenuItem *Qidirish1;
	TMenuItem *Yordam1;
	TMenuItem *Dasturhaqida1;
	TMenuItem *Qadiruvsistemasiniyopish1;
	TMenuItem *Qadiruvsistemasiniochish1;
	TMenuItem *Boshqamalumotlarnikorish1;
	TMenuItem *Asosiyoynagaotish1;
	TMenuItem *Loginvaparoloynasigaotish1;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton8;
	TEdit *Edit1;
	TADOQuery *ADOQuery2;
	TDBEdit *DBEdit5;
	TLabel *Label1;
	TLabel *Label2;
	TDBEdit *DBEdit6;
	TDBEdit *DBEdit7;
	TDBEdit *DBEdit8;
	TLabel *Label5;
	TLabel *Label4;
	TLabel *Label6;
	TDBMemo *DBMemo3;
	TLabel *Label7;
	TDBMemo *DBMemo4;
	TLabeledEdit *LabeledEdit1;
	TLabeledEdit *LabeledEdit2;
	TMenuItem *Yopish1;
	TMenuItem *Ochish1;
	TLabel *Bemorlar_soni;
	TLabel *Label3;
	void __fastcall SpeedButton11Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall LabeledEdit1Change(TObject *Sender);
	void __fastcall LabeledEdit2Change(TObject *Sender);
	void __fastcall SpeedButton9Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall SpeedButton7Click(TObject *Sender);
	void __fastcall DBGrid1TitleClick(TColumn *Column);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall SpeedButton6Click(TObject *Sender);
	void __fastcall Qadiruvsistemasiniochish1Click(TObject *Sender);
	void __fastcall Qadiruvsistemasiniyopish1Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall Chiqish2Click(TObject *Sender);
	void __fastcall Asosiyoynagaotish1Click(TObject *Sender);
	void __fastcall Loginvaparoloynasigaotish1Click(TObject *Sender);
	void __fastcall SpeedButton5Click(TObject *Sender);
	void __fastcall SpeedButton8Click(TObject *Sender);
	void __fastcall Yordam1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm_Shifokor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm_Shifokor *Form_Shifokor;
//---------------------------------------------------------------------------
#endif
