//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "Unit6.h"
#include <ADODB.hpp>
#include <Buttons.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
#include "Unit14.h"
#include "Unit19.h"
#include "Unit9.h"
#include "Unit11.h"
#include "Unit4.h"
#include "Unit7.h"
#include "Unit12.h"
#include "Unit8.h"
#include "Unit10.h"
#include <DBCtrls.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TForm_Bolim_boshligi_uchun_Bemorlar : public TForm
{
__published:	// IDE-managed Components
	TSplitter *Splitter1;
	TPanel *Panel1;
	TSpeedButton *SpeedButton6;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton9;
	TSpeedButton *SpeedButton11;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TPanel *Panel2;
	TLabeledEdit *LabeledEdit1;
	TLabeledEdit *LabeledEdit2;
	TPanel *Panel3;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label11;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label19;
	TDBGrid *DBGrid1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TComboBox *ComboBox_Shifokor;
	TLabel *Label23;
	TADOQuery *ADOQuery2;
	TMainMenu *MainMenu1;
	TMenuItem *File1;
	TMenuItem *Malumotozgartirish1;
	TMenuItem *Malumotchiqarish2;
	TMenuItem *Wordchiqarish1;
	TMenuItem *Jadvalkorinishidachiqarish1;
	TMenuItem *Malumotochirish1;
	TMenuItem *Panelniyashirish1;
	TMenuItem *Ochish1;
	TMenuItem *Yopish1;
	TMenuItem *Malumotlarinikorsatish1;
	TMenuItem *N2;
	TMenuItem *Chiqish2;
	TMenuItem *Qidirish1;
	TMenuItem *Qadiruvsistemasiniochish1;
	TMenuItem *Qadiruvsistemasiniyopish1;
	TMenuItem *Boshqamalumotlarnikorish1;
	TMenuItem *Asosiyoynagaotish1;
	TMenuItem *Loginvaparoloynasigaotish1;
	TMenuItem *Shifokorlarhaqidagimalumotlar1;
	TMenuItem *Yordam1;
	TMenuItem *Dasturhaqida1;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton8;
	TEdit *Edit1;
	TADOQuery *ADOQuery3;
	TDBEdit *DBEdit1;
	TDBEdit *DBEdit2;
	TDBEdit *DBEdit3;
	TDBEdit *DBEdit4;
	TDBMemo *DBMemo1;
	TDBMemo *DBMemo2;
	TLabel *Bemorlar_soni;
	TLabel *Label3;
	void __fastcall LabeledEdit1Change(TObject *Sender);
	void __fastcall LabeledEdit2Change(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall SpeedButton7Click(TObject *Sender);
	void __fastcall SpeedButton6Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall SpeedButton9Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall DBGrid1TitleClick(TColumn *Column);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall ComboBox_ShifokorChange(TObject *Sender);
	void __fastcall Asosiyoynagaotish1Click(TObject *Sender);
	void __fastcall Loginvaparoloynasigaotish1Click(TObject *Sender);
	void __fastcall Shifokorlarhaqidagimalumotlar1Click(TObject *Sender);
	void __fastcall SpeedButton11Click(TObject *Sender);
	void __fastcall Chiqish2Click(TObject *Sender);
	void __fastcall Qadiruvsistemasiniochish1Click(TObject *Sender);
	void __fastcall Qadiruvsistemasiniyopish1Click(TObject *Sender);
	void __fastcall SpeedButton5Click(TObject *Sender);
	void __fastcall SpeedButton8Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm_Bolim_boshligi_uchun_Bemorlar(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm_Bolim_boshligi_uchun_Bemorlar *Form_Bolim_boshligi_uchun_Bemorlar;
//---------------------------------------------------------------------------
#endif
