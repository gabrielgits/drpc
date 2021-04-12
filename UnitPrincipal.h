//---------------------------------------------------------------------------

#ifndef UnitPrincipalH
#define UnitPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Layouts.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Fmx.Bind.DBEngExt.hpp>
#include <Fmx.Bind.Editors.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <FMX.ActnList.hpp>
#include <System.Actions.hpp>
#include <FMX.MediaLibrary.Actions.hpp>
#include <FMX.StdActns.hpp>

//---------------------------------------------------------------------------
class TFormPrincipal : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TRectangle *Rectangle2;
	TButton *Button2;
	TButton *Button3;
	TLayout *Layout1;
	TButton *Button4;
	TText *Text2;
	TBindingsList *BindingsList1;
	TActionList *ActionList1;
	TShowShareSheetAction *ShowShareSheetAction1;
	TText *Text1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall ShowShareSheetAction1BeforeExecute(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormPrincipal *FormPrincipal;
//---------------------------------------------------------------------------
#endif
