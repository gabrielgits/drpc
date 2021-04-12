//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "UnitTemas.h"
#include "UnitCausa.h"
#include "UnitPrincipal.h"
#include "UnitSintomas.h"
#include "UnitSobre.h"
#include "UnitData.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TFormTemas *FormTemas;
void TFormTemas::AplicarTema()
{

	FormPrincipal->Fill->Color = DataModule1->meutema.getFormCor();
	FormPrincipal->Rectangle2->Fill->Color = DataModule1->meutema.getRectCor();
	FormPrincipal->Text1->Font = DataModule1->meutema.getFonteTextoGrande();
	FormPrincipal->Text2->Font = DataModule1->meutema.getFonteTexto();

	FormSobre->Fill->Color = DataModule1->meutema.getFormCor();
	FormSobre->Rectangle1->Fill->Color = DataModule1->meutema.getRectCor();
	//FormSobre->Memo1->FontColor = DataModule1->meutema.getMemoTextoCor();
	FormSobre->Text2->Font = DataModule1->meutema.getFonteTextoGrande();
	FormSobre->Text1->Font = DataModule1->meutema.getFonteTexto();
	//FormSobre->Memo1->Font = DataModule1->meutema.getFonteMemo();

	FormCausa->Fill->Color = DataModule1->meutema.getFormCor();
	FormCausa->Memo1->FontColor = DataModule1->meutema.getMemoTextoCor();

	FormSintomas->Fill->Color = DataModule1->meutema.getFormCor();
}
//---------------------------------------------------------------------------
__fastcall TFormTemas::TFormTemas(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormTemas::FormCreate(TObject *Sender)
{
	/*DataModule1->meutema.CarregarTema(System::Ioutils::TPath::Combine(System::Ioutils::TPath::GetDocumentsPath(),
	"temas/"+DataModule1->FDTableConfig->FieldByName("tema")->AsString));
	AplicarTema();
	Text1->Text = "Tema Actual: "+DataModule1->meutema.getNome();   */
	//Fill->Bitmap->Bitmap->LoadFromFile(System::Ioutils::TPath::Combine(System::Ioutils::TPath::GetDocumentsPath(),
	//"temas/"+DataModule1->meutema.Image));
}
//---------------------------------------------------------------------------

void __fastcall TFormTemas::Button1Click(TObject *Sender)
{
	AplicarTema();
	Text1->Text = "Tema Actual: "+DataModule1->meutema.getNome();
	Fill->Bitmap->Bitmap->LoadFromFile(System::Ioutils::TPath::Combine(System::Ioutils::TPath::GetDocumentsPath(),
	"temas//"+DataModule1->meutema.Image));
}
//---------------------------------------------------------------------------


