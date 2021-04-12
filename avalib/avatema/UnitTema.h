//---------------------------------------------------------------------------

#ifndef UnitTemaH
#define UnitTemaH
//---------------------------------------------------------------------------
#include <System.hpp>
#include <System.UIConsts.hpp>
#include <FMX.Graphics.hpp>
#include <System.IOUtils.hpp>

typedef AnsiString texto;
class Tema
{
public:
   TFont * getFonteMemo(void);
   void setFonteMemo(TFont * newFonteMemo);
   TFont * getFonteTexto(void);
   void setFonteTexto(TFont * newFonteTexto);
   Tema();
   ~Tema();
   TFont * getFonteTextoGrande(void);
   void setFonteTextoGrande(TFont * newFonteTextoGrande);
   void CarregarTema(texto Caminho);
   int AplicarTema(void);
   int GuardarTema(void);
   int getFormCor(void);
   void setFormCor(int newFormCor);
   int getRectCor(void);
   void setRectCor(int newRectCor);
   int getTextoCor(void);
   void setTextoCor(int newTextoCor);
   int getMemoCor(void);
   void setMemoCor(int newMemoCor);
   int getMemoTextoCor(void);
   void setMemoTextoCor(int newMemoTextoCor);
   texto getNome(void);
   void setNome(texto newNome);
   int ID;
   texto Image;

protected:
private:
   TFont * FonteMemo;
   TFont * FonteTexto;
   TFont * FonteTextoGrande;
   int FormCor;
   int RectCor;
   int TextoCor;
	int MemoCor;
	int MemoTextoCor;
   texto Nome;
};

#endif
