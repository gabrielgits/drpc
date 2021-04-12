//---------------------------------------------------------------------------

#ifndef UnitAjudarH
#define UnitAjudarH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.ActnList.hpp>
#include <System.Actions.hpp>
#include <FMX.Ani.hpp>

//---------------------------------------------------------------------------
class TFormTemas : public TForm
{
__published:	// IDE-managed Components
	TLayout *Layout1;
	TButton *Button1;
	TComboBox *ComboBox1;
	TLayout *Layout2;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
	int AplicarTema();
public:		// User declarations
	__fastcall TFormTemas(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormTemas *FormTemas;
//---------------------------------------------------------------------------
#endif
