//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm_Bemorlar : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label10;
	TLabel *Label4;
	TLabel *Label3;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label1;
	TLabel *Label0;
	TLabeledEdit *Muassasaning_nomi;
	TLabeledEdit *Muassasaning_kodi;
	TLabeledEdit *Dorilarning_nojoya_tasiri;
	TLabeledEdit *Kasalxonaga_yotqizilgan_vaqt;
	TLabeledEdit *Kasalxonadan_chiqarilgan_vaqt;
	TLabeledEdit *Qaysi_bolimga_otkazildi;
	TLabeledEdit *Necha_kun_yotib_davolangan;
	TLabeledEdit *Doimiy_yashash_joyi;
	TLabeledEdit *Ish_joyi_kasbi;
	TLabeledEdit *Bemor_qayerdan_yuborilgan;
	TLabeledEdit *qanday_transportda;
	TComboBox *Holati;
	TLabeledEdit *bemor_yollanmasidagi_tashhisi;
	TLabeledEdit *Qabulxonada_qoyilgan_tashhis;
	TLabeledEdit *Kasalxonada_qoyilgan_tashhis;
	TGroupBox *GroupBox1;
	TLabeledEdit *Aniqlangan_xamroh_kasalliklr;
	TLabeledEdit *Asosiy_kasallik_asorati;
	TLabeledEdit *Asosiy;
	TComboBox *Kasalxonaga_yotishi;
	TLabeledEdit *Hammasi_bolib;
	TGroupBox *GroupBox2;
	TLabeledEdit *Operasiya_nomi;
	TLabeledEdit *Ogriqsizlantirish_usuli;
	TLabeledEdit *Asoratlar;
	TLabeledEdit *Operatsiya_Vaqti;
	TLabeledEdit *Operasiya_qiluvchi;
	TComboBox *Rezus_mansubligi;
	TComboBox *Qon_guruhi;
	TLabeledEdit *Davolashning_boshqa_turlari;
	TLabeledEdit *Mexnatga_yaroqsizlik_varogi;
	TLabeledEdit *Davolash_natijasi;
	TLabeledEdit *Ekspertizaga_yuborish_uchun;
	TComboBox *Bemorni_olib_yurish_turlari;
	TLabel *Label2;
	TLabeledEdit *Yoshi;
	TComboBox *JInsi;
	TLabel *Label5;
	TLabeledEdit *Familiyasi;
	TLabeledEdit *Ismi;
	TLabeledEdit *Alohida_belgilari;
	TLabeledEdit *Qabul_qilinganda_tekshirildi;
	TLabeledEdit *Davolash_shifokori;
	TLabeledEdit *Bolim_mudiri;
	TButton *Button2;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TLabeledEdit *Xona;
	TPopupMenu *PopupMenu1;
	TMenuItem *Saqlash1;
	TMenuItem *N1;
	TMenuItem *Chiqish1;
	TMenuItem *Kundalik1;
	TMenuItem *Xotima1;
	TMenuItem *Qabulxonashifokorining1;
	TMenuItem *Shikoyatlarkasalliktarixi1;
	TMenuItem *Patollogoanatomxulosasi1;
	TMaskEdit *MaskEdit1;
	TMaskEdit *MaskEdit2;
	TMaskEdit *MaskEdit3;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TSpeedButton *SpeedButton3;
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TForm_Bemorlar(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm_Bemorlar *Form_Bemorlar;
//---------------------------------------------------------------------------
#endif
