//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "UnitAjudar.h"
#include "UnitCausa.h"
#include "UnitPrincipal.h"
#include "UnitSintomas.h"
#include "UnitSobre.h"
#include "UnitSplash.h"
#include "UnitData.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TFormTemas *FormTemas;
int TFormTemas::AplicarTema()
{
	FormPrincipal->Fill->Color = DataModule1->meutema.getFormCor();
}
//---------------------------------------------------------------------------
__fastcall TFormTemas::TFormTemas(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormTemas::FormCreate(TObject *Sender)
{
	DataModule1->meutema.CarregarTema("..\\..\\temas\\padrao.adt");

}
//---------------------------------------------------------------------------

void __fastcall TFormTemas::Button1Click(TObject *Sender)
{
	AplicarTema();
}
//---------------------------------------------------------------------------

