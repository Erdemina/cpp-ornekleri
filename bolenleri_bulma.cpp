#include <iostream>
using namespace std;
int main(){ 
   cout<<"Bu uygulama  bolenleri buldurur."<<endl;
   cout<<"Lutfen araligi giriniz."<<endl;
   int toplam=0;
   float kontrol=0, a;
   /*a float olmalı çünkü a/i nin ondalıklı bir sayı gelmesi gerekiyor.*/
   cout<<">>  ";
   cin>>a;
   cout<<"Sayinin bolenleri:";
   for (int i = 1; i <= a; i++)
   {
       kontrol=a/i;
       if (kontrol==int(kontrol) )
       {
           cout<<i<<",";
       }
       
   }
   cout<<endl;
}