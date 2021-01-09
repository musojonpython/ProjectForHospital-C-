//---------------------------------------------------------------------------

#ifndef Unit13H
#define Unit13H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include "Unit20.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
class TForm_Shifokorlar_haqida : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TSpeedButton *SpeedButton6;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton9;
	TSpeedButton *SpeedButton11;
	TPanel *Panel2;
	TLabeledEdit *LabeledEdit1;
	TLabeledEdit *LabeledEdit2;
	TDBGrid *DBGrid2;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TADOQuery *ADOQuery2;
	TSpeedButton *SpeedButton3;
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
	TLabel *Label1;
	TComboBox *ComboBox1;
	TMenuItem *Bolimboshliqariroyxatigaotish1;
	TSpeedButton *SpeedButton2;
	TLabel *Bemorlar_soni;
	TLabel *Label3;
	void __fastcall LabeledEdit1Change(TObject *Sender);
	void __fastcall LabeledEdit2Change(TObject *Sender);
	void __fastcall DBGrid2TitleClick(TColumn *Column);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall SpeedButton9Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall SpeedButton6Click(TObject *Sender);
	void __fastcall Chiqish2Click(TObject *Sender);
	void __fastcall Qadiruvsistemasiniochish1Click(TObject *Sender);
	void __fastcall Qadiruvsistemasiniyopish1Click(TObject *Sender);
	void __fastcall Asosiyoynagaotish1Click(TObject *Sender);
	void __fastcall Loginvaparoloynasigaotish1Click(TObject *Sender);
	void __fastcall Bolimboshliqariroyxatigaotish1Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm_Shifokorlar_haqida(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm_Shifokorlar_haqida *Form_Shifokorlar_haqida;
//---------------------------------------------------------------------------
#endif
