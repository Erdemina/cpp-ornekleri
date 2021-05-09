/*Kullanıcıdan 2 değer alan ve bu değerler arasında yer alan tüm mükemmel sayıları ekranda gösteren programı yazınız.(Mükemmel sayı: kendisi hariç pozitif tam bölenlerinin toplamı kendine eşit olan sayıdır.)
*/
#include "unistd.h"
#include <iostream>
using namespace std;
int main() {
    float a,kontrol,b;
    int toplam=0;
    cout<<">> A kac olsun ?"<<endl;
    cin>>a;
    cout<<">> B kac olsun ?"<<endl;
    cin>>b;
     
     
     if (a==b)
  {
    cout<<"Iki sayi da birbirine esit::"<<a<<"\t Bolenleri::";
      for (int i=1; i <a; i++)
      {
         kontrol=a/i;
         if (kontrol == (int)kontrol)
         {
             cout<<i<<",";
             toplam=toplam+i;
         }
         
         
      }
      if (toplam==a)
      {
          cout<<"\t ::Mukemmel Sayi::";
      }
    cout<<"\tBolenleri Toplami::"<<toplam;
    toplam = 0;  
    cout<<"\n";

  }
  
  
  for ( ; int (a) > int (b); a--)
  {
      cout<<"\n";
      cout<<"Denenen sayi::"<<a<<"     Bolenleri::";

    for (int i = 1; i < a; i++)
    {
        
        kontrol = a/i;
        if (kontrol==(int)kontrol)
        {
            cout<<i<<",";
            toplam=toplam+i;
        }
          
    }
    if (toplam==a)
    {
        cout<<"\t::Mukemmel Sayi::";
    }
    
    cout<<"\tSayilarin Toplami::"<<toplam;
    toplam=0;
    cout<<"\n";
  }

  for (; int (b)>int (a); b--)
  {
      cout<<"\n";
      cout<<"Denenen sayi::"<<b<<"     Bolenleri::";

    for (int i = 1; i < b; i++)
    {
        
        kontrol = b/i;
        if (kontrol==(int)kontrol)
        {
            cout<<i<<",";
            toplam=toplam+i;
        }
          
    }
    if (toplam==b)
    {
        cout<<"\t::Mukemmel Sayi::";
    }
    
    cout<<"\tSayilarin Toplami::"<<toplam;
    toplam=0;
    cout<<"\n";
  }

 
  
  
}
