#include <iostream>
#include "unistd.h"
using namespace std;
int main() {
    int x,y,z;
    
    cout<<"En büyük ve en küçük uygulaması"<<endl;
    cout<<"-------------------------------\nLütfen 3 değer giriniz\n\n\n1.Değer kaç olsun?\n>>";
    cin>>x;
    cout<<"\n2.Değer kaç olsun?\n>>";
    cin>>y;
    cout<<"\n3.Değer kaç olsun?\n>>";
    cin>>z;
    int enbuyuk=x; //enbuyuk ve enkucuk karşılaştırması yapabilmek için şimdilik x değeri olarak atadık.
    int enkucuk=x;
    cout<<"\n\nEn buyuk sayi="<<enbuyuk<<"\nEn kucuk sayi="<<enkucuk<<endl;
    if (y>enbuyuk) //karşılaştırmaları yapıp en buyuk ve en kucuk değerleri seçiyoruz.
    {
        enbuyuk=y;
    }
    if (z>enbuyuk)
    {
        enbuyuk=z;
    }
    if (y<enkucuk)
    {
        enkucuk=y;
    }
    if (z<enkucuk)
    {
        enkucuk=z;
    }
    
    
    
    
    
    cout<<"\n\nEn buyuk sayi="<<enbuyuk<<"\nEn kucuk sayi="<<enkucuk<<endl;
    if (x==y && y==z) //üç değerin birbirine eşit olup olmadığını kontrol ediyor.
    {
        cout<<"\nÜç sayı da birbirine eşittir."<<endl;
    }
    else if (x==y)  //üç sayı birbirine eşit değilse başka eşit sayı var mı diye kontrol ediyor.
    {
        cout<<"\nBirinci ve ikinci sayılar birbirine eşittir.\t"<<x<<endl;
    }
    else if (x==z)
    {
        cout<<"\nBirinci ve üçüncü sayılar birbirine eşittir.\t"<<x<<endl;
    }
     if (y==z) 
    {
        cout<<"\nİkinci ve üçüncü sayılar birbirine eşittir.\t"<<x<<endl;
    }
    
    
    
    
    
}
