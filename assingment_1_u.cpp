//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "assingment_1_u.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
 i = 0;
 lblEnd->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::btnStartClick(TObject *Sender)
{
	btnStart->Enabled = false; //disable Go! button
	//pnlNum1//
	StartPerc = Random(100) + 80;  ///start percentage
	pnlRand = Random(100) + 80;
	pnlNum1->ParentBackground = false;
	pnlNum1->Color =randPnlC[1];
	int randW_H =Random(60) + 40;
	pnlNum1->Width = randW_H;
	pnlNum1->Height = randW_H ;
    //pnlNum2//
	StartPerc = Random(100) + 80;
	pnlNum2->ParentBackground = false;
	pnlNum2->Color =randPnlC[2];
	int randW_H1 =Random(60) + 40;    //its a sqaure so it will share same val for W and H
	pnlRand = Random(100) + 80;      //number between 100 and 80
	pnlNum2->Width = randW_H1;
	pnlNum2->Height =	randW_H1;

	if(timeIntvl > 199 && timeIntvl <401) //must be 200 - 400
	{
		tmrDelay->Interval = timeIntvl;
		edtDelay->Text = IntToStr(timeIntvl);
	}else if(timeIntvl <200){
		timeIntvl = 200;
		tmrDelay->Interval = timeIntvl;
		edtDelay->Text = IntToStr(timeIntvl); //display exeption
	}else if(timeIntvl >400){
		 timeIntvl = 400;
		 edtDelay->Text = IntToStr(timeIntvl);//display exeption
		 tmrDelay->Interval = timeIntvl;
    }
	tmrDelay->Enabled = true;
}
//--------//   PANEL MARK 1 POSITION CALC      //-------------------------------------------------------------------
void TForm3::randPositionPnl1(){
	i++; 							  //click counter
	StartPerc = Random(100) + 80;
	pnlNum1->Color =randPnlC[1];
	int randW_H =Random(60) + 40;    //its a sqaure so it will share same val for W and H
	pnlRand = Random(100) + 80;      //number between 100 and 80
	pnlNum1->Width = randW_H;
	pnlNum1->Height =	randW_H ;
	int leftWidth = Random(pnlMain->Width - pnlNum1->Width);
	pnlNum1->Left = leftWidth;
	int topHeight = Random(pnlMain->Height - pnlNum1->Height);
	pnlNum1->Top = topHeight;
}
 //--------//   PANEL MARK 2 POSITION CALC      //-------------------------------------------------------------------
void TForm3::randPositionPnl2(){
	i++; 							  //click counter
	StartPerc = Random(100) + 80;
	pnlNum2->Color =randPnlC[2];
	int randW_H1 =Random(60) + 40;    //its a sqaure so it will share same val for W and H
	pnlRand = Random(100) + 80;      //number between 100 and 80
	pnlNum2->Width = randW_H1;
	pnlNum2->Height =	randW_H1 ;
	int leftWidth = Random(pnlMain->Width - pnlNum2->Width);
	pnlNum2->Left = leftWidth;
	int topHeight = Random(pnlMain->Height - pnlNum2->Height);
	pnlNum2->Top = topHeight;
}
 //--------//   PANEL MARK 2 POSITION CALC      //-------------------------------------------------------------------
void TForm3::randPositionPnl3(){
	i++; 							  //click counter
	StartPerc = Random(100) + 80;
	pnlNum3->Color =randPnlC[2];
	int randW_H1 =Random(60) + 40;    //its a sqaure so it will share same val for W and H
	pnlRand = Random(100) + 80;      //number between 100 and 80
	pnlNum3->Width = randW_H1;
	pnlNum3->Height =	randW_H1 ;
	int leftWidth = Random(pnlMain->Width - pnlNum3->Width);
	pnlNum3->Left = leftWidth;
	int topHeight = Random(pnlMain->Height - pnlNum3->Height);
	pnlNum3->Top = topHeight;
}
void __fastcall TForm3::tmrDelayTimer(TObject *Sender)
{
	pgbTime->StepBy(1);
	pnlNum1->Width = pnlNum1->Width - 1;
	pnlNum1->Height = pnlNum1->Height - 1;
	pnlNum2->Width = pnlNum2->Width - 1;
	pnlNum2->Height = pnlNum2->Height - 1;
	captionReduce = Random(7)+1;           //reduces caption with a rand number 1 - 7
    pnlRand -= captionReduce;
	pnlNum1->Caption = IntToStr(pnlRand);
	if (pnlNum1->Width == 0 || pnlNum1->Height ==0) {
	  randPositionPnl1();
	  randPositionPnl2();
	}

	if(pgbTime->Position == pgbTime->Max){
		tmrDelay->Enabled = false;
		lblEnd->Show();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm3::pnlNum1Click(TObject *Sender)
{
	AnsiString line;
	int totalMissed =  StartPerc - pnlRand;
	line = IntToStr(i)+"\t"+IntToStr(StartPerc)+"%\t"+IntToStr(pnlRand)+"%\t"+
			IntToStr(totalMissed);
    lstResults->Items->Add(line);
    Application->ProcessMessages();
}
//---------------------------------------------------------------------------

