//---------------------------------------------------------------------------

#ifndef UnitLetraH
#define UnitLetraH

class Letra
{
public:
   int getTamanho(void);
   void setTamanho(int newTamanho);
   texto getFamilia(void);
   void setFamilia(texto newFamilia);
   Letra();
   ~Letra();
   unsigned int getCor(void);
   void setCor(unsigned int newCor);

protected:
private:
   int Tamanho;
   texto Familia;
   unsigned int Cor;


};

//---------------------------------------------------------------------------
#endif
