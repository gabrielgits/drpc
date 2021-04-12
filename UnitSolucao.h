//---------------------------------------------------------------------------

#ifndef UnitSolucaoH
#define UnitSolucaoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
#include <FMX.WebBrowser.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
//---------------------------------------------------------------------------
class TFormSolucao : public TForm
{
__published:	// IDE-managed Components
	TRectangle *Rectangle1;
	TWebBrowser *WebBrowser1;
	TRectangle *Rectangle2;
	TButton *Button1;
	TButton *Button2;
private:	// User declarations
public:		// User declarations
	__fastcall TFormSolucao(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormSolucao *FormSolucao;
//---------------------------------------------------------------------------
#endif
