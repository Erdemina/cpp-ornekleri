/*Verilen n tane sayının toplamını hesaplayınız*/
#include "unistd.h" /*sleep komutunu kullanmak istersem diye*/
#include <iostream>
using namespace std;
int main() {
    int n, toplam=0,sayi;
    cout<<"Bu bir deneme programidir."<<endl;
    cout<<"Sayi adedi kac olsun:"<<endl;
    cin>>n;
    for (int i = 1; i<=n; i++)
    {
        cout<<i<<". sayiyi giriniz:";
        cin>>sayi;
        toplam=toplam+sayi;
    }
    cout<<"Sonuc="<<toplam<<endl;
    return(0);
}