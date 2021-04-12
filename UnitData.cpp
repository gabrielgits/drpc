//---------------------------------------------------------------------------


#pragma hdrstop

#include "UnitData.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "FMX.Controls.TControl"
#pragma resource "*.dfm"
TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
__fastcall TDataModule1::TDataModule1(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDataModule1::DataModuleCreate(TObject *Sender)
{
	FDConnection1->Params->Values["Database"] =
	System::Ioutils::TPath::Combine(System::Ioutils::TPath::GetDocumentsPath(),
	"drpc/drpc.db");
	FDConnection1->Connected = true;
	FDTableConfig->Active = true;
	FDTableSintomas->Active = true;
	FDQueryCausas->Active = true;
	FDQueryCausas2->Active = true;

}
//---------------------------------------------------------------------------

