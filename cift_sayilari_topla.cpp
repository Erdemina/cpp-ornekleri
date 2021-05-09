/*40'dan 4'e kadar azaltarak bu sayıların arasındaki çift tam sayılarının toplamını bulup ekrana yazınız.*/
#include "unistd.h"
#include <iostream>
using namespace std;
int main() {
    int a,b,toplam=0,sayi=0;
    cout<<"A sayisi kac olsun ?"<<endl;
    cin>>a;
    cout<<"B sayisi kac olsun ?"<<endl;
    cin>>b;
     if (a==b)
    {
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"A ve B esittir.  "<<"A="<<a<<"  B="<<b;
        if (a||b%2==0)
        {
            cout<<"ve ikisi de cift sayidir.";
        }
        cout<<endl;
        
        cout<<"---------------------------------------------------------"<<endl;
    }
    for ( ; a>b; a--)
    { 
        cout<<a;
        if (a%2==0)
        {
            
            cout<<"::Cift sayidir.";
            
            toplam=toplam+a;
        }
        cout<<endl;
    }
    for (; b>a; b--)
    {
       cout<<b;
       if (b%2==0)
       {
           
           cout<<"::Cift sayıdır.";
           
           toplam=toplam+b;
       }
       cout<<endl;
       
    }
   
    
    
    
}