//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("UnitPrincipal.cpp", FormPrincipal);
USEFORM("UnitSintomas.cpp", FormSintomas);
USEFORM("UnitSobre.cpp", FormSobre);
USEFORM("UnitTemas.cpp", FormTemas);
USEFORM("UnitCausa.cpp", FormCausa);
USEFORM("UnitData.cpp", DataModule1); /* TDataModule: File Type */
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TFormPrincipal), &FormPrincipal);
		Application->CreateForm(__classid(TFormSintomas), &FormSintomas);
		Application->CreateForm(__classid(TFormCausa), &FormCausa);
		Application->CreateForm(__classid(TDataModule1), &DataModule1);
		Application->CreateForm(__classid(TFormSobre), &FormSobre);
		Application->CreateForm(__classid(TFormTemas), &FormTemas);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
