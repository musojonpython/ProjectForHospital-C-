//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Hammasini_belgilashClick(TObject *Sender)
{
   if (Hammasini_belgilash->Checked) {
   Hammasini_ochirish->Checked = false;
   CheckBox1->Checked = true;
   CheckBox2->Checked = true;
   CheckBox3->Checked = true;
   CheckBox4->Checked = true;
   CheckBox5->Checked = true;
   CheckBox6->Checked = true;
   CheckBox7->Checked = true;
   CheckBox8->Checked = true;
   CheckBox9->Checked = true;
   CheckBox10->Checked = true;
   CheckBox11->Checked = true;
   CheckBox12->Checked = true;
   CheckBox13->Checked = true;
   CheckBox14->Checked = true;
   CheckBox15->Checked = true;
   CheckBox16->Checked = true;
   CheckBox17->Checked = true;
   CheckBox18->Checked = true;
   CheckBox19->Checked = true;
   CheckBox20->Checked = true;
   CheckBox21->Checked = true;
   CheckBox22->Checked = true;
   CheckBox23->Checked = true;
   CheckBox24->Checked = true;
   CheckBox25->Checked = true;
   CheckBox26->Checked = true;
   CheckBox27->Checked = true;
   CheckBox28->Checked = true;
   CheckBox29->Checked = true;
   CheckBox30->Checked = true;
   CheckBox31->Checked = true;
   CheckBox32->Checked = true;
   CheckBox33->Checked = true;
   CheckBox34->Checked = true;
   CheckBox35->Checked = true;
   CheckBox36->Checked = true;
   CheckBox37->Checked = true;
   CheckBox38->Checked = true;
   CheckBox39->Checked = true;
   CheckBox40->Checked = true;
   CheckBox41->Checked = true;
   CheckBox42->Checked = true;
   CheckBox43->Checked = true;
   CheckBox44->Checked = true;
   CheckBox45->Checked = true;
   CheckBox46->Checked = true;
   CheckBox47->Checked = true;
   CheckBox48->Checked = true;
   CheckBox49->Checked = true;
   CheckBox50->Checked = true;
   CheckBox51->Checked = true;
   CheckBox52->Checked = true;
   CheckBox53->Checked = true;
 }

}
//---------------------------------------------------------------------------

void __fastcall TForm4::SpeedButton1Click(TObject *Sender)
{
  if (CheckBox1->Checked)
	 Form2->DBGrid1->Columns->Items[0]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[0]->Visible = false;
  if (CheckBox2->Checked)
	Form2->DBGrid1->Columns->Items[1]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[1]->Visible = false;
  if (CheckBox3->Checked)
	 Form2->DBGrid1->Columns->Items[2]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[2]->Visible = false;
  if (CheckBox4->Checked)
	 Form2->DBGrid1->Columns->Items[3]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[3]->Visible = false;
  if (CheckBox5->Checked)
	 Form2->DBGrid1->Columns->Items[4]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[4]->Visible = false;
  if (CheckBox6->Checked)
	 Form2->DBGrid1->Columns->Items[5]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[5]->Visible = false;
  if (CheckBox7->Checked)
	 Form2->DBGrid1->Columns->Items[6]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[6]->Visible = false;
  if (CheckBox8->Checked)
	 Form2->DBGrid1->Columns->Items[7]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[7]->Visible = false;
  if (CheckBox9->Checked)
	 Form2->DBGrid1->Columns->Items[8]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[8]->Visible = false;
  if(CheckBox10->Checked)
	 Form2->DBGrid1->Columns->Items[9]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[9]->Visible = false;
  if(CheckBox11->Checked)
	 Form2->DBGrid1->Columns->Items[10]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[10]->Visible = false;
  if(CheckBox12->Checked)
	 Form2->DBGrid1->Columns->Items[11]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[11]->Visible = false;
  if(CheckBox13->Checked)
	 Form2->DBGrid1->Columns->Items[12]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[12]->Visible = false;
  if(CheckBox14->Checked)
	 Form2->DBGrid1->Columns->Items[13]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[13]->Visible = false;
  if(CheckBox15->Checked)
	 Form2->DBGrid1->Columns->Items[14]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[14]->Visible = false;
  if(CheckBox16->Checked)
	 Form2->DBGrid1->Columns->Items[15]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[15]->Visible = false;
  if(CheckBox17->Checked)
	 Form2->DBGrid1->Columns->Items[16]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[16]->Visible = false;
  if(CheckBox18->Checked)
	 Form2->DBGrid1->Columns->Items[17]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[17]->Visible = false;
  if(CheckBox19->Checked)
	 Form2->DBGrid1->Columns->Items[18]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[18]->Visible = false;
  if(CheckBox20->Checked)
	 Form2->DBGrid1->Columns->Items[19]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[19]->Visible = false;
  if(CheckBox21->Checked)
	 Form2->DBGrid1->Columns->Items[20]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[20]->Visible = false;
  if(CheckBox22->Checked)
	 Form2->DBGrid1->Columns->Items[21]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[21]->Visible = false;
  if(CheckBox23->Checked)
	 Form2->DBGrid1->Columns->Items[22]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[22]->Visible = false;
  if(CheckBox24->Checked)
	 Form2->DBGrid1->Columns->Items[23]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[23]->Visible = false;
  if(CheckBox25->Checked)
	 Form2->DBGrid1->Columns->Items[24]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[24]->Visible = false;
  if(CheckBox26->Checked)
	 Form2->DBGrid1->Columns->Items[25]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[25]->Visible = false;
  if(CheckBox27->Checked)
	 Form2->DBGrid1->Columns->Items[26]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[26]->Visible = false;
  if(CheckBox28->Checked)
	 Form2->DBGrid1->Columns->Items[27]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[27]->Visible = false;
  if(CheckBox29->Checked)
	 Form2->DBGrid1->Columns->Items[28]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[28]->Visible = false;
  if(CheckBox30->Checked)
	 Form2->DBGrid1->Columns->Items[29]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[29]->Visible = false;
  if(CheckBox31->Checked)
	 Form2->DBGrid1->Columns->Items[30]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[30]->Visible = false;
  if(CheckBox32->Checked)
	 Form2->DBGrid1->Columns->Items[31]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[31]->Visible = false;
  if(CheckBox33->Checked)
	 Form2->DBGrid1->Columns->Items[32]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[32]->Visible = false;
  if(CheckBox34->Checked)
	 Form2->DBGrid1->Columns->Items[33]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[33]->Visible = false;
  if(CheckBox35->Checked)
	 Form2->DBGrid1->Columns->Items[34]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[34]->Visible = false;
  if(CheckBox36->Checked)
	 Form2->DBGrid1->Columns->Items[35]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[35]->Visible = false;
  if(CheckBox37->Checked)
	 Form2->DBGrid1->Columns->Items[36]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[36]->Visible = false;
  if(CheckBox38->Checked)
	 Form2->DBGrid1->Columns->Items[37]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[37]->Visible = false;
  if(CheckBox39->Checked)
	 Form2->DBGrid1->Columns->Items[38]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[38]->Visible = false;
  if(CheckBox40->Checked)
	 Form2->DBGrid1->Columns->Items[39]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[39]->Visible = false;
  if(CheckBox41->Checked)
	 Form2->DBGrid1->Columns->Items[40]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[40]->Visible = false;
  if(CheckBox42->Checked)
	 Form2->DBGrid1->Columns->Items[41]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[41]->Visible = false;
  if(CheckBox43->Checked)
	 Form2->DBGrid1->Columns->Items[42]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[42]->Visible = false;
  if(CheckBox44->Checked)
	 Form2->DBGrid1->Columns->Items[43]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[43]->Visible = false;
  if(CheckBox45->Checked)
	 Form2->DBGrid1->Columns->Items[44]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[44]->Visible = false;
  if(CheckBox46->Checked)
	 Form2->DBGrid1->Columns->Items[45]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[45]->Visible = false;
  if(CheckBox47->Checked)
	 Form2->DBGrid1->Columns->Items[46]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[46]->Visible = false;
  if(CheckBox48->Checked)
	 Form2->DBGrid1->Columns->Items[47]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[47]->Visible = false;
  if(CheckBox49->Checked)
	 Form2->DBGrid1->Columns->Items[48]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[48]->Visible = false;
  if(CheckBox50->Checked)
	 Form2->DBGrid1->Columns->Items[49]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[49]->Visible = false;
  if(CheckBox51->Checked)
	 Form2->DBGrid1->Columns->Items[50]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[50]->Visible = false;
  if(CheckBox52->Checked)
	 Form2->DBGrid1->Columns->Items[51]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[51]->Visible = false;
  if(CheckBox53->Checked)
	 Form2->DBGrid1->Columns->Items[52]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[52]->Visible = false;
  if(CheckBox54->Checked)
	 Form2->DBGrid1->Columns->Items[53]->Visible = true;
  else
	 Form2->DBGrid1->Columns->Items[53]->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Hammasini_ochirishClick(TObject *Sender)
{
   if (Hammasini_ochirish->Checked) {
   Hammasini_belgilash->Checked = false;
   CheckBox1->Checked = false;
   CheckBox2->Checked = false;
   CheckBox3->Checked = false;
   CheckBox4->Checked = false;
   CheckBox5->Checked = false;
   CheckBox6->Checked = false;
   CheckBox7->Checked = false;
   CheckBox8->Checked = false;
   CheckBox9->Checked = false;
   CheckBox10->Checked = false;
   CheckBox11->Checked = false;
   CheckBox12->Checked = false;
   CheckBox13->Checked = false;
   CheckBox14->Checked = false;
   CheckBox15->Checked = false;
   CheckBox16->Checked = false;
   CheckBox17->Checked = false;
   CheckBox18->Checked = false;
   CheckBox19->Checked = false;
   CheckBox20->Checked = false;
   CheckBox21->Checked = false;
   CheckBox22->Checked = false;
   CheckBox23->Checked = false;
   CheckBox24->Checked = false;
   CheckBox25->Checked = false;
   CheckBox26->Checked = false;
   CheckBox27->Checked = false;
   CheckBox28->Checked = false;
   CheckBox29->Checked = false;
   CheckBox30->Checked = false;
   CheckBox31->Checked = false;
   CheckBox32->Checked = false;
   CheckBox33->Checked = false;
   CheckBox34->Checked = false;
   CheckBox35->Checked = false;
   CheckBox36->Checked = false;
   CheckBox37->Checked = false;
   CheckBox38->Checked = false;
   CheckBox39->Checked = false;
   CheckBox40->Checked = false;
   CheckBox41->Checked = false;
   CheckBox42->Checked = false;
   CheckBox43->Checked = false;
   CheckBox44->Checked = false;
   CheckBox45->Checked = false;
   CheckBox46->Checked = false;
   CheckBox47->Checked = false;
   CheckBox48->Checked = false;
   CheckBox49->Checked = false;
   CheckBox50->Checked = false;
   CheckBox51->Checked = false;
   CheckBox52->Checked = false;
   CheckBox53->Checked = false;
}
}
//---------------------------------------------------------------------------

