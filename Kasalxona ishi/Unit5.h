//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
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
#include "Unit6.h"
#include <Menus.hpp>
#include <Mask.hpp>
#include "Unit17.h"
#include "Unit16.h"
#include "Unit12.h"
#include "Unit20.h"
//---------------------------------------------------------------------------
class TForm_Bolim_boshliqlari : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TPanel *Panel1;
	TDataSource *DataSource1;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton6;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton5;
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
	TMenuItem *N2;
	TMenuItem *Chiqish2;
	TMenuItem *Qidirish1;
	TMenuItem *Qadiruvsistemasiniochish1;
	TMenuItem *Qadiruvsistemasiniyopish1;
	TMenuItem *Boshqamalumotlarnikorish1;
	TMenuItem *Asosiyoynagaotish1;
	TMenuItem *Shifokorlarhaqidagimalumotlar1;
	TMenuItem *Yordam1;
	TMenuItem *Dasturhaqida1;
	TMenuItem *Malumotqoshish2;
	TMenuItem *Bemorlarhaqidagimalumotlar1;
	TLabeledEdit *LabeledEdit1;
	TLabeledEdit *LabeledEdit2;
	TADOQuery *ADOQuery1;
	TLabel *Bemorlar_soni;
	TLabel *Label3;
	void __fastcall Qadiruvsistemasiniochish1Click(TObject *Sender);
	void __fastcall Qadiruvsistemasiniyopish1Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall Chiqish2Click(TObject *Sender);
	void __fastcall Asosiyoynagaotish1Click(TObject *Sender);
	void __fastcall Loginvaparoloynasigaotish1Click(TObject *Sender);
	void __fastcall Shifokorlarhaqidagimalumotlar1Click(TObject *Sender);
	void __fastcall Bemorlarhaqidagimalumotlar1Click(TObject *Sender);
	void __fastcall SpeedButton7Click(TObject *Sender);
	void __fastcall LabeledEdit1Change(TObject *Sender);
	void __fastcall LabeledEdit2Change(TObject *Sender);
	void __fastcall DBGrid1TitleClick(TColumn *Column);
	void __fastcall SpeedButton5Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TForm_Bolim_boshliqlari(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm_Bolim_boshliqlari *Form_Bolim_boshliqlari;
//---------------------------------------------------------------------------
#endif
