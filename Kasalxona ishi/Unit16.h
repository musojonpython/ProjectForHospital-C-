//---------------------------------------------------------------------------

#ifndef Unit16H
#define Unit16H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include <Dialogs.hpp>
#include <ExtDlgs.hpp>
#include <Mask.hpp>
#include "Unit14.h"
#include "Unit12.h"
#include <ADODB.hpp>
#include <DB.hpp>
#include "Unit6.h"
//---------------------------------------------------------------------------
class TShifokorlar_haqida_malumot_toldirish : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label2;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TSpeedButton *SpeedButton1;
	TLabeledEdit *Familiyasi;
	TLabeledEdit *Ismi;
	TLabeledEdit *Otasini_Ismi;
	TLabeledEdit *Yashash_manzili;
	TLabeledEdit *Ish_faoliyati;
	TMaskEdit *Telefon_nomer;
	TMaskEdit *Tug_kun_oy_yil;
	TComboBox *Jinsi;
	TMaskEdit *Pasport_raqami;
	TLabeledEdit *Bolim_nomi;
	TLabeledEdit *Lavozimi;
	TLabeledEdit *Ishga_kelish_vaqti;
	TLabeledEdit *Ishdan_ketish_vaqti;
	TLabeledEdit *Ish_haqqi;
	TLabeledEdit *Login;
	TLabeledEdit *Parol;
	TEdit *Tug_kun_Edit;
	TEdit *Telefon_nomeri;
	TEdit *Pasporti;
	TGroupBox *GroupBox1;
	TRadioButton *Shifokorlar;
	TRadioButton *Bolim_boshliqlari;
	TRadioButton *Shifoxona_boshligi;
	TEdit *Jins;
	TRadioButton *Shifokorlar_haqida_malumot;
	TRadioButton *Bolim_boshliqlari_haqida_malumot;
	TRadioButton *Shifokorlar_bolim_boshligi_uchun;
	TADOQuery *ADOQuery_Shifokor;
	TADOQuery *ADOQuery_bolim_boshliq;
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TShifokorlar_haqida_malumot_toldirish(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TShifokorlar_haqida_malumot_toldirish *Shifokorlar_haqida_malumot_toldirish;
//---------------------------------------------------------------------------
#endif
