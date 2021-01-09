//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Buttons.hpp>
#include "Unit14.h"
#include "Unit4.h"
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TImage *Image1;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton5;
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall SpeedButton1MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall SpeedButton1MouseLeave(TObject *Sender);
	void __fastcall SpeedButton2MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall SpeedButton2MouseLeave(TObject *Sender);
	void __fastcall SpeedButton3MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall SpeedButton3MouseLeave(TObject *Sender);
	void __fastcall SpeedButton4MouseLeave(TObject *Sender);
	void __fastcall SpeedButton4MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall SpeedButton5MouseLeave(TObject *Sender);
	void __fastcall SpeedButton5MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall SpeedButton5Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);




private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
