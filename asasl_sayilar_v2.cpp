#include <iostream>
using namespace std;
int main() {
    int a,b;
    int toplam=0;
    cout<<"\n"<<endl;
    cout<<"Iki sayinin ve arasindaki sayilarin asalligini kontrol edip bolenleri bulunur eger 1 sayinin bulmak istiyorsan iki sayiyi da esit girmelisin.\n"<<endl;
    cout<<"A kac olsun ?"<<endl;
    cout<<">>  ";
    cin>>a;
    cout<<"B kac olsun ?"<<endl;
    cout<<">>  ";
    cin>>b;
     if (a==b)
    {
           cout<<endl;
        cout<<"Sayi:"<<b<<"\tBolenleri:";
       for (int i = 1; i < b; i++)
       {
        if (b%i==0)
        {
            
            cout<<i<<",";
            toplam +=i;
            
        }
        
    }
    
    if (toplam==1)
    {
        cout<<"\t\t::Asal Sayi::  "<<b;
    }
    toplam=0;
    cout<<endl;
    cout<<endl;
     }
    if ( a>=b){
    for (;  b<a; a--)
    {
        cout<<endl;
        cout<<"Sayi:"<<a<<"\tBolenleri:";
       for (int i = 1; i < a; i++)
       {
        if (a%i==0)
        {
            
            cout<<i<<",";
            toplam +=i;
            
        }
        
    }
    
    if (toplam==1)
    {
        cout<<"\t\t::Asal Sayi::  "<<a;
    }
    toplam=0;
    cout<<endl;
    cout<<endl;
     }
     cout<<endl;
     cout<<"Sayi:"<<b<<"\tBolenleri:";
     for (int i = 1; i < b; i++)
     {
         
         if (b%i==0){
                  cout<<i<<",";
                  toplam += i;
         }
        
         
     }
      if (toplam==1)
         {
             cout<<"\t\t::Asal Sayi::"<<"\t"<<b;
         }
         toplam=0;
     cout<<endl;
     cout<<endl;
    }

    if ( b>=a){
    for (;  a<b; b--)
    {
        cout<<endl;
        cout<<"Sayi:"<<b<<"\tBolenleri:";
       for (int i = 1; i < b; i++)
       {
        if (b%i==0)
        {
            
            cout<<i<<",";
            toplam +=i;
            
        }
        
    }
    
    if (toplam==1)
    {
        cout<<"\t\t::Asal Sayi::  "<<b;
    }
    toplam=0;
    cout<<endl;
    cout<<endl;
     }
     cout<<endl;
     cout<<"Sayi:"<<a<<"\tBolenleri:";
     for (int i = 1; i < a; i++)
     {
         
         if (a%i==0){
                  cout<<i<<",";
                  toplam += i;
         }
        
         
     }
      if (toplam==1)
         {
             cout<<"\t\t::Asal Sayı::"<<"\t"<<a;
         }
         toplam=0;
     cout<<endl;
     cout<<endl;
    }

   
}

