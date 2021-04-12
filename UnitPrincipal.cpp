//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "UnitPrincipal.h"
#include "UnitSintomas.h"
#include "UnitSobre.h"
#include "UnitAjudar.h"
#include "UnitData.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"


TFormPrincipal *FormPrincipal;
//---------------------------------------------------------------------------
__fastcall TFormPrincipal::TFormPrincipal(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormPrincipal::Button1Click(TObject *Sender)
{
	FormSintomas->Show();

}
//---------------------------------------------------------------------------

void __fastcall TFormPrincipal::Button2Click(TObject *Sender)
{
	FormSobre->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormPrincipal::Button3Click(TObject *Sender)
{
	ShowMessage("Funcionalidade disponivel em breve");
	//FormTemas->Show();
}
//---------------------------------------------------------------------------



void __fastcall TFormPrincipal::ShowShareSheetAction1BeforeExecute(TObject *Sender)

{
	 ShowShareSheetAction1->TextMessage = DataModule1->FDTableConfig->FieldByName("Partilha")->AsString;
}
//---------------------------------------------------------------------------






