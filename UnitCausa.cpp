//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "UnitCausa.h"
#include "UnitData.h"
#include "UnitSolucao.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TFormCausa *FormCausa;

void __fastcall TFormCausa::ActulizarListView(int index)
{

	DataModule1->FDQueryCausas2->ParamByName("causaid")->AsInteger = index;
	DataModule1->FDQueryCausas2->Refresh();
	Memo1->Lines->Clear();
	if (!DataModule1->FDQueryCausas2->Eof)
	{

		Memo1->Lines->Add("Problema: "+DataModule1->FDQueryCausas2->FieldByName("sintoma")->AsString);
		Memo1->Lines->Add("Causa: "+DataModule1->FDQueryCausas2->FieldByName("causatitulo")->AsString);
		Memo1->Lines->Add("Categoria: "+DataModule1->FDQueryCausas2->FieldByName("categoria")->AsString);
		Memo1->Lines->Add("\n"+DataModule1->FDQueryCausas2->FieldByName("causadescricao")->AsString);
		Memo1->TagString = DataModule1->FDQueryCausas2->FieldByName("solucaolink")->AsString;
	}
	else
	{
		ShowMessage("Causa do problema não encotrado");
    }
}
//---------------------------------------------------------------------------
__fastcall TFormCausa::TFormCausa(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormCausa::ListView1ItemClick(TObject * const Sender, TListViewItem * const AItem)

{
	ActulizarListView(StrToInt(AItem->Detail));
	TabControl1->SetActiveTabWithTransition(TabItem2,TTabTransition::Slide);
}
//---------------------------------------------------------------------------

void __fastcall TFormCausa::Button1Click(TObject *Sender)
{
/*	FormSolucao->WebBrowser1->Navigate(Memo1->TagString);
	ShowMessage(Memo1->TagString);
	FormSolucao->Show();  */
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormCausa::FormShow(TObject *Sender)
{
	TabControl1->SetActiveTabWithTransition(TabItem1,TTabTransition::Slide);
}
//---------------------------------------------------------------------------

