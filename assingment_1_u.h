//---------------------------------------------------------------------------

#ifndef assingment_1_uH
#define assingment_1_uH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TButton *btnStart;
	TPanel *pnlHolder;
	TLabel *Label1;
	TEdit *edtDelay;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *lblPerc;
	TPanel *pnlMain;
	TListBox *lstResults;
	TPanel *pnlList;
	TProgressBar *pgbTime;
	TTimer *tmrDelay;
	TPanel *pnlNum1;
	TLabel *lblEnd;
	TPanel *pnlNum2;
	TPanel *pnlNum3;
	void __fastcall btnStartClick(TObject *Sender);
	void __fastcall tmrDelayTimer(TObject *Sender);
	void __fastcall pnlNum1Click(TObject *Sender);
private:	// User declarations
	TColor randPnlC[3] = {clBlue,clRed,clGreen};
	int pnlRand;
	int pnlRand1;
	int pnlRand2;
    int captionReduce;
	int timeIntvl =  StrToInt(edtDelay->Text);
	int i;
	int StartPerc;
	int StartPerc1;
	int StartPerc2;
public:		// User declarations
	void randPositionPnl1();
	void randPositionPnl2();
    void randPositionPnl3();

	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
