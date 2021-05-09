#include <iostream>
using namespace std;
int main(){
    int sayi;
    cout<<"\nLütfen bölenlerini bulmak istediğiniz sayıyı yazınız."<<endl;
    cout<<">>  ";
    cin>>sayi;
    cout<<"\nBölenleri::  ";
    for (int i = 1; i < sayi; i++)
    {
        if (sayi%i==0)
        {
            cout<<i<<",";
        }
        
    }
    cout<<endl;
}