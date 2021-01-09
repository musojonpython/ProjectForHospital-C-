//---------------------------------------------------------------------------

#ifndef Unit20H
#define Unit20H
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
#include "Unit4.h"
#include "Unit11.h"
#include "Unit9.h"
#include "Unit1.h"
#include "Unit12.h"
#include "Unit13.h"
#include "Unit5.h"
#include "Unit10.h"
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include "Unit17.h"
//---------------------------------------------------------------------------
class TForm_Bemorlar_Shifoxona_boshligi_uchun : public TForm
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
	TLabel *Label23;
	TLabeledEdit *LabeledEdit1;
	TLabeledEdit *LabeledEdit2;
	TComboBox *ComboBox_Shifokor;
	TPanel *Panel3;
	TLabel *Label11;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label19;
	TDBGrid *DBGrid1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TADOQuery *ADOQuery_Shifokorlar;
	TComboBox *ComboBox_bolim_nomi;
	TADOQuery *ADOQuery_bolim_boshliqlari;
	TLabel *Label22;
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
	TMenuItem *Yordam1;
	TMenuItem *Dasturhaqida1;
	TMenuItem *Bolimboshligilarimalumotlari1;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton5;
	TADOQuery *ADOQuery2;
	TEdit *Edit1;
	TDBEdit *DBEdit1;
	TLabel *Label1;
	TLabel *Label2;
	TDBEdit *DBEdit2;
	TDBEdit *DBEdit3;
	TDBEdit *DBEdit4;
	TLabel *Label5;
	TLabel *Label4;
	TLabel *Label6;
	TDBMemo *DBMemo1;
	TLabel *Label7;
	TDBMemo *DBMemo2;
	TLabel *Label3;
	TLabel *Bemorlar_soni;
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall SpeedButton6Click(TObject *Sender);
	void __fastcall SpeedButton7Click(TObject *Sender);
	void __fastcall SpeedButton9Click(TObject *Sender);
	void __fastcall SpeedButton11Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall ComboBox_bolim_nomiChange(TObject *Sender);
	void __fastcall ComboBox_ShifokorChange(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall LabeledEdit1Change(TObject *Sender);
	void __fastcall LabeledEdit2Change(TObject *Sender);
	void __fastcall DBGrid1TitleClick(TColumn *Column);
	void __fastcall Ochish1Click(TObject *Sender);
	void __fastcall Chiqish2Click(TObject *Sender);
	void __fastcall Asosiyoynagaotish1Click(TObject *Sender);
	void __fastcall Bolimboshligilarimalumotlari1Click(TObject *Sender);
	void __fastcall Qadiruvsistemasiniochish1Click(TObject *Sender);
	void __fastcall Qadiruvsistemasiniyopish1Click(TObject *Sender);
	void __fastcall Loginvaparoloynasigaotish1Click(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall SpeedButton1MouseLeave(TObject *Sender);
	void __fastcall SpeedButton1MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall SpeedButton5Click(TObject *Sender);
	void __fastcall Yordam1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm_Bemorlar_Shifoxona_boshligi_uchun(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm_Bemorlar_Shifoxona_boshligi_uchun *Form_Bemorlar_Shifoxona_boshligi_uchun;
//---------------------------------------------------------------------------
#endif
