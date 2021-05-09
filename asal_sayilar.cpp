/*Girilen iki sayı ve arasındaki asal sayıları ekrana yazdıran bir program yazınız.
*/
#include "unistd.h"
#include <iostream>
using namespace std;
int main() {
    float a,b,kontrol;
    int toplam=0;
    cout<<"A kac olsun ?"<<endl;
    cin>>a;
    cout<<"B kac olsun ?"<<endl;
    cin>>b;
    if (a==b)
    {
        cout<<"Iki sayi birbirine esittir."<<" \t A="<<a<<"  B="<<b<<" \t Bolenleri::";
        for (int i = 1; i < a; i++)
        {
            kontrol=a/i;
            if(kontrol==int (kontrol))
            {
                  cout<<i<<",";
                  toplam +=i;
            }
        }
        if (toplam==1)
        {
            cout<<" \t ::Asal Sayıdır::";
        }
        cout<<"\n"<<endl;
    }
    for (; int (a)>=int (b); a--)
    {
        cout<<"Denenen Sayi::"<<a<<" \t Bolenleri::";

        for (int i = 1; i < a; i++)
        {
            
            kontrol = a/i;
            if (kontrol==int (kontrol))
            {
                cout<<i<<",";
                toplam +=i;
             

            }
           
            
        }
        
        if (toplam==1)
            {
                
                cout<<" \t ::Asal Sayı::";
            }
         toplam=0;
        cout<<"\n"<<endl;
    }
    for (; int (b) >= int (a); b--)
    {
        cout<<"Denenen Sayi::"<<b<<" \t Bolenleri::";
        for (int i = 1; i < b; i++)
        {
            kontrol=b/i;
            if (kontrol==int(kontrol))
            {
                cout<<i<<",";
                toplam +=i;
            }
            
        }
        if (toplam==1)
        {
            cout<<" \t ::Asal Sayi::";
        }
        toplam=0;
        cout<<"\n"<<endl;
    }
    
    
    return (0);
}