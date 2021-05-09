/*Girilen iki sayı ve arasındaki değerleri ekrana yazdıran program yazınız.*/

#include "unistd.h" /*sleep komutunu kullanmak istersem diye*/
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"A kaç olsun ?"<<endl;
    cin>>a;
    cout<<"B kaç olsun ?"<<endl;
    cin>>b;
    cout<<"-------------"<<endl;
    if (a==b)
    {
        cout <<"A ve B eşit sayılardır."<<endl;
        cout <<"A="<<a<<"  B="<<b<<endl;
    }

    while( a < b)
    {  
        b=--b;
        cout<<b<<endl;
        if(a>=b) break;
        sleep(1);
    }
    
    while (a > b)
    {
        a=--a;
        cout<<a<<endl;
        if(b>=a) break;
    }
    
    
    
    
    
    return(0);
}