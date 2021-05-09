#include <iostream>
using namespace std;
int faktoriyel(int x){
  int fcarpim=1;
  for(; 1<=x;x--){
   fcarpim*=x;
  }
  return fcarpim;
}

int kombinasyon(int n,int r){
return faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r));
}
int main() {
   int n,r;
   cout<<"Kombinasyonu alınacak değeri giriniz.(n)\n>>";
   cin>>n;
   cout<<"Kombinasyon değerini giriniz.(r)\n>>";
   cin>>r;
   cout<<"\n"<<kombinasyon(n,r)<<"\n"<<endl;
}
