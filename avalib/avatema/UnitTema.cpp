//---------------------------------------------------------------------------

#pragma hdrstop

#include "UnitTema.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

////////////////////////////////////////////////////////////////////////
// Name:       Tema::getFonteMemo()
// Purpose:    Implementation of Tema::getFonteMemo()
// Return:     TFont *
////////////////////////////////////////////////////////////////////////

TFont * Tema::getFonteMemo(void)
{
   return FonteMemo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::setFonteMemo(TFont * newFonteMemo)
// Purpose:    Implementation of Tema::setFonteMemo()
// Parameters:
// - newFonteMemo
// Return:     void
////////////////////////////////////////////////////////////////////////

void Tema::setFonteMemo(TFont * newFonteMemo)
{
   FonteMemo = newFonteMemo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::getFonteTexto()
// Purpose:    Implementation of Tema::getFonteTexto()
// Return:     TFont *
////////////////////////////////////////////////////////////////////////

TFont * Tema::getFonteTexto(void)
{
   return FonteTexto;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::setFonteTexto(TFont * newFonteTexto)
// Purpose:    Implementation of Tema::setFonteTexto()
// Parameters:
// - newFonteTexto
// Return:     void
////////////////////////////////////////////////////////////////////////

void Tema::setFonteTexto(TFont * newFonteTexto)
{
   FonteTexto = newFonteTexto;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::Tema()
// Purpose:    Implementation of Tema::Tema()
// Return:
////////////////////////////////////////////////////////////////////////

Tema::Tema()
{

   FonteMemo = new TFont();
   FonteTexto = new TFont();
   FonteTextoGrande = new TFont();
   FormCor = claBlack;
   RectCor = claBlack;
   TextoCor = claBlack;
   MemoCor = claBlack;
   MemoTextoCor = claBlack;
   Nome = "Padrao";
   ID = 0;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::~Tema()
// Purpose:    Implementation of Tema::~Tema()
// Return:
////////////////////////////////////////////////////////////////////////

Tema::~Tema()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::getFonteTextoGrande()
// Purpose:    Implementation of Tema::getFonteTextoGrande()
// Return:     TFont *
////////////////////////////////////////////////////////////////////////

TFont * Tema::getFonteTextoGrande(void)
{
   return FonteTextoGrande;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::setFonteTextoGrande(TFont * newFonteTextoGrande)
// Purpose:    Implementation of Tema::setFonteTextoGrande()
// Parameters:
// - newFonteTextoGrande
// Return:     void
////////////////////////////////////////////////////////////////////////

void Tema::setFonteTextoGrande(TFont * newFonteTextoGrande)
{
   FonteTextoGrande = newFonteTextoGrande;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::CarregarTema()
// Purpose:    Implementation of Tema::CarregarTema()
// Return:     int
////////////////////////////////////////////////////////////////////////

void Tema::CarregarTema(texto Caminho)
{
   // TODO : implement
	TFile *file = new TFile();
	TStringDynArray filetemp = file->ReadAllLines(Caminho);
	  Nome = filetemp[0];
	  ID = StrToInt(filetemp[1]);
	  FormCor = StrToInt(filetemp[3]);
	  RectCor = StrToInt(filetemp[5]);
	  TextoCor = StrToInt(filetemp[7]);
	  MemoCor = StrToInt(filetemp[9]);
	  MemoTextoCor = StrToInt(filetemp[11]);
	  FonteMemo->Family = filetemp[13];
	  FonteMemo->Size = StrToFloat(filetemp[14]);
	  FonteTexto->Family = filetemp[16];
	  FonteTexto->Size = StrToFloat(filetemp[17]);
	  FonteTextoGrande->Family = filetemp[19];
	  FonteTextoGrande->Size = StrToFloat(filetemp[20]);
	  Image = filetemp[21];



}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::AplicarTema()
// Purpose:    Implementation of Tema::AplicarTema()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Tema::AplicarTema(void)
{
   // TODO : implement
   return 0;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::GuardarTema()
// Purpose:    Implementation of Tema::GuardarTema()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Tema::GuardarTema(void)
{
   // TODO : implement
   return 0;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::getFormCor()
// Purpose:    Implementation of Tema::getFormCor()
// Return:     unsigned int
////////////////////////////////////////////////////////////////////////

 int Tema::getFormCor(void)
{
   return FormCor;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::setFormCor(unsigned int newFormCor)
// Purpose:    Implementation of Tema::setFormCor()
// Parameters:
// - newFormCor
// Return:     void
////////////////////////////////////////////////////////////////////////

void Tema::setFormCor(int newFormCor)
{
   FormCor = newFormCor;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::getRectCor()
// Purpose:    Implementation of Tema::getRectCor()
// Return:     unsigned int
////////////////////////////////////////////////////////////////////////

 int Tema::getRectCor(void)
{
   return RectCor;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::setRectCor(unsigned int newRectCor)
// Purpose:    Implementation of Tema::setRectCor()
// Parameters:
// - newRectCor
// Return:     void
////////////////////////////////////////////////////////////////////////

void Tema::setRectCor(int newRectCor)
{
   RectCor = newRectCor;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::getTextoCor()
// Purpose:    Implementation of Tema::getTextoCor()
// Return:     unsigned int
////////////////////////////////////////////////////////////////////////

 int Tema::getTextoCor(void)
{
   return TextoCor;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::setTextoCor(unsigned int newTextoCor)
// Purpose:    Implementation of Tema::setTextoCor()
// Parameters:
// - newTextoCor
// Return:     void
////////////////////////////////////////////////////////////////////////

void Tema::setTextoCor(int newTextoCor)
{
   TextoCor = newTextoCor;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::getMemoCor()
// Purpose:    Implementation of Tema::getMemoCor()
// Return:     unsigned int
////////////////////////////////////////////////////////////////////////

 int Tema::getMemoCor(void)
{
   return MemoCor;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::setMemoCor(unsigned int newMemoCor)
// Purpose:    Implementation of Tema::setMemoCor()
// Parameters:
// - newMemoCor
// Return:     void
////////////////////////////////////////////////////////////////////////

void Tema::setMemoCor(int newMemoCor)
{
   MemoCor = newMemoCor;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::getMemoTextoCor()
// Purpose:    Implementation of Tema::getMemoTextoCor()
// Return:     unsigned int
////////////////////////////////////////////////////////////////////////

 int Tema::getMemoTextoCor(void)
{
   return MemoTextoCor;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::setMemoTextoCor(unsigned int newMemoTextoCor)
// Purpose:    Implementation of Tema::setMemoTextoCor()
// Parameters:
// - newMemoTextoCor
// Return:     void
////////////////////////////////////////////////////////////////////////

void Tema::setMemoTextoCor(int newMemoTextoCor)
{
   MemoTextoCor = newMemoTextoCor;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::getNome()
// Purpose:    Implementation of Tema::getNome()
// Return:     texto
////////////////////////////////////////////////////////////////////////

texto Tema::getNome(void)
{
   return Nome;
}

////////////////////////////////////////////////////////////////////////
// Name:       Tema::setNome(texto newNome)
// Purpose:    Implementation of Tema::setNome()
// Parameters:
// - newNome
// Return:     void
////////////////////////////////////////////////////////////////////////

void Tema::setNome(texto newNome)
{
   Nome = newNome;
}
