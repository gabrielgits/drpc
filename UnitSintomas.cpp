//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "UnitSintomas.h"
#include "UnitCausa.h"
#include "UnitData.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TFormSintomas *FormSintomas;

void __fastcall TFormSintomas::ActulizarListView(int index)
{

	DataModule1->FDQueryCausas->ParamByName("sintomaid")->AsInteger = index;
	DataModule1->FDQueryCausas->Refresh();
	DataModule1->FDQueryCausas->First();
	FormCausa->ListView1->Items->Clear();
	while (!DataModule1->FDQueryCausas->Eof)
	{

		TListViewItem * item =  FormCausa->ListView1->Items->Add();
		item->Text = DataModule1->FDQueryCausas->FieldByName("causatitulo")->AsString;
		item->Detail = DataModule1->FDQueryCausas->FieldByName("causaid")->AsString;
	   //	item->ImageIndex = 2;
	//(FDQCap->FieldByName("capitulo")->AsAnsiString);
		DataModule1->FDQueryCausas->Next();
	}
}
//---------------------------------------------------------------------------
__fastcall TFormSintomas::TFormSintomas(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormSintomas::Button1Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormSintomas::ListView1ItemClick(TObject * const Sender, TListViewItem * const AItem)

{

	ActulizarListView(StrToInt(AItem->Detail));
	FormCausa->Show();
}
//---------------------------------------------------------------------------

