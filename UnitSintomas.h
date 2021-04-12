//---------------------------------------------------------------------------

#ifndef UnitSintomasH
#define UnitSintomasH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.ListView.Adapters.Base.hpp>
#include <FMX.ListView.Appearances.hpp>
#include <FMX.ListView.hpp>
#include <FMX.ListView.Types.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Fmx.Bind.DBEngExt.hpp>
#include <Fmx.Bind.Editors.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <FMX.Layouts.hpp>
//---------------------------------------------------------------------------
class TFormSintomas : public TForm
{
__published:	// IDE-managed Components
	TListView *ListView1;
	TButton *Button1;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TLinkFillControlToField *LinkFillControlToField1;
	TText *Text1;
	TLayout *Layout1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ListView1ItemClick(TObject * const Sender, TListViewItem * const AItem);
	void __fastcall ActulizarListView(int index);
private:	// User declarations
public:		// User declarations
	__fastcall TFormSintomas(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormSintomas *FormSintomas;
//---------------------------------------------------------------------------
#endif
