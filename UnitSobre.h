//---------------------------------------------------------------------------

#ifndef UnitSobreH
#define UnitSobreH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Memo.hpp>
#include <FMX.Objects.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.Types.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Fmx.Bind.DBEngExt.hpp>
#include <Fmx.Bind.Editors.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
//---------------------------------------------------------------------------
class TFormSobre : public TForm
{
__published:	// IDE-managed Components
	TRectangle *Rectangle1;
	TText *Text2;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TText *Text1;
	TRectangle *Rectangle2;
private:	// User declarations
public:		// User declarations
	__fastcall TFormSobre(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormSobre *FormSobre;
//---------------------------------------------------------------------------
#endif
