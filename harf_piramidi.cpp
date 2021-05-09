/*
 *  Bir harf giriniz:E
 *  A    
 *  ABA
 *  ABCBA
 *  ABCDCBA
 *  
 *  A
 *  ABA
 *  ABCBA
 *  ABCDCBA
 * 
 * A 65
 * B 66
 * C 67
 * D 68
 * 
 * E 69
 * F 70
 * */
#include <iostream>
using namespace std;
int main() {
  char harf;
  cout<<"Harfi giriniz\n>>";
  cin>>harf;
  harf=toupper(harf);
  for(int i=0;i<=(int)harf-65; i++) {
	  for(int j=65; j<=i+65;j++){
	     cout<<(char)j;
	  }
	  for(int k=64+i; k>=65; k--){
	  cout<<(char)k;
	  }
  cout<<endl;
  }
 
  
}
