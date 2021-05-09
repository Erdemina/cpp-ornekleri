#include <iostream>

using namespace std;

int main() {

  int sayi=0 , birler=0 , onlar=0, yuzler=0 ;

  cout << "Sayi giriniz: ";
  cin >> sayi;
    
    cout<<"\n\n"<<endl;
    

    sayi = sayi%1000;
    yuzler = sayi/100;
    switch (yuzler)
    {
    case 1:
           cout<<"Yuz  ";
        break;
    case 2:
           cout<<"Ikiyuz  ";
        break;
    case 3:
           cout<<"Ucyuz  ";
    case 4:
           cout<<"Dortyuz  ";
        break;
    case 5:
           cout<<"Besyuz  ";
        break;
    case 6:
           cout<<"Altiyuz  ";
        break;
    case 7:
           cout<<"Yediyuz  ";
        break;
    case 8:
           cout<<"Sekizyuz  ";
        break;
    case 9:
           cout<<"Dokuzyuz  ";
        break;
    
    
    default: cout<<"Bir hata bulundu !!!!";
        break;
    }    
     sayi = sayi%100;
     onlar = sayi/10;
    switch (onlar)
    {
    case 1: 
         cout<<"On ";
        break;
    case 2:
         cout<<"Yirmi ";
         break;
    case 3:
         cout<<"Otuz  ";
         break;
    case 4:  
         cout<<"Kirk  ";
         break;
    case 5:
         cout<<"Elli  ";
         break;
    case 6:
         cout<<"Altmis  ";
         break;
    case 7:
         cout<<"Yetmiş  ";
         break;
    case 8:
         cout<<"Seksen  ";
         break;
    case 9:
         cout<<"Doksan  ";
         break;    
    default: cout<<"Bir hata bulundu !!!!";
        break;
    }

    birler = sayi % 10;
    switch (birler) {
    case 1:
      cout << "Bir ";
      break;
    case 2:
      cout << "Iki ";
      break;
    case 3:
      cout << "Uc  ";
      break;
    case 4:
      cout << "Dort ";
      break;
    case 5:
      cout << "Bes ";
      break;
    case 6:
      cout << "Alti ";
      break;
    case 7:
      cout << "Yedi ";
      break;
    case 8:
      cout << "Sekiz ";
      break;
    case 9:
      cout << "Dokuz ";
      break;
    default: cout<<"Bir hata bulundu !!!!";
      break;
    }
   
    
   cout<<"\n\n"<<endl;
   return (0);
  }

  
