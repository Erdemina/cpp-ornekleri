/*1'den 1000'e kadar olan sayıların içersinde 5'e tam bölünen aynı zamanda 7 ye tam bölünemeyen sayıları sayan, toplamlarını hesaplayan ve bu sayıları listeleyen bir program yazınız.*/
#include "unistd.h"
#include <iostream>
using namespace std;
int main(){
    int sayi,toplam=0,islem;
    cout<<"Hos geldiniz oncelikle islem yapacaginiz sayiyi seciniz."<<endl;
    cout<<"Lutfen sayiyi giriniz.\n>>"<<endl;
    cin>>sayi;
    cout<<"Lutfen bir secenek seciniz"<<endl;
    cout<<"[1]::Tum sayilari goster."<<endl;
    cout<<"[2]::Yalnizca Bese bolunen ve Yediye bolunemeyenleri goster.\n>>"<<endl;
    cin>>islem;
    
    switch (islem)
    {
        
    case 1:
        for (; sayi >0; sayi--)
    {
        cout<<sayi;
        if (sayi%5==0 && sayi%7!=0)
        {
            cout<<"::Bese tam bolunur Yediye bolunmez";
            toplam=toplam+sayi;
        }
        cout<<endl;
    }
        break;

    case 2:
            for (; sayi >0; sayi--)
    {
        if (sayi%5==0 && sayi%7!=0)
        {
            cout<<sayi;
            cout<<"::Bese tam bolunur Yediye bolunmez"<<endl;
            
            toplam=toplam+sayi;
            
        }
        
    }
    default: cout<<"Hata: Olmayan br secenek seçmeye calıştınız lutfen tekrar deneyiniz!!!!"<<endl;
        break;
    
    }
    if (sayi==0)
    {
    cout<<"Bese bolunenlerin ve yediye bolunemeyenlerin Toplamı="<<toplam<<endl;
    }
    
}