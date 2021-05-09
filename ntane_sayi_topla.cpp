/*Verilen n tane sayının toplamını hesaplayınız*/
#include "unistd.h" /*sleep komutunu kullanmak istersem diye*/
#include <iostream>
using namespace std;
int main() {
    int n, toplam=0,sayi;//toplamı 0 dan başlatıyoruz çünkü toplamanın etksisiz elemanı 0'dır ve toplanan değerler burada birikeceği için fazladan veya eksik değer almasını istemeyiz.
    cout<<"Bu bir deneme programidir."<<endl;
    cout<<"Sayi adedi kac olsun:"<<endl;
    cin>>n; //kaç sayı toplayacğını seçtiriyoruz
    for (int i = 1; i<=n; i++) //kaç sayı toplayacağını seçmiştik girilen sayı adedi kadar sayı almak için for döngüsü kullanılıyor.
    {
        cout<<i<<". sayiyi giriniz:";
        cin>>sayi; 
        toplam+=sayi;// toplam=toplam+sayi(toplam+=sayi)  sayıyı topluyor ve değerini toplama atıyor böylece toplam ın içinde değerler birikiyor ve toplama işlemi gerçekleşiyor.
    }
    cout<<"Sonuc="<<toplam<<endl;
    return(0);
}
