/*Üç basamaklı, basamaklarının küpleri toplamı kendisine eşit olan tamsayılara Armstrong sayı denir. Bunları ekrana yazdırınız.
*/
#include "unistd.h"
#include <iostream>
using namespace std;
int main() {
    int sayi=999,toplam=0,birlerbas,onlarbas,yuzlerbas,sayibas;
    
    for (; 99<sayi  ; sayi--)
    {
        cout<<"Sayimiz::"<<sayi<<endl;
        sayibas=sayi%1000;
        yuzlerbas=sayibas/100;
        cout<<"Yuzler basamagi::"<<yuzlerbas;
        sayibas=sayi%100;
        onlarbas=sayibas/10;
        cout<<"\tOnlar basamagi::"<<onlarbas;

        birlerbas=sayi%10;
        cout<<"\tBirler basamagi::"<<birlerbas;
        int onlarkup=onlarbas*onlarbas*onlarbas,yuzlerkup=yuzlerbas*yuzlerbas*yuzlerbas,birlerkup=birlerbas*birlerbas*birlerbas;
        if (sayi==yuzlerkup+onlarkup+birlerkup)
        {
            cout<<"\t ::Armstrong Sayi::";
        }
        cout<<"\n";
    }
    
}