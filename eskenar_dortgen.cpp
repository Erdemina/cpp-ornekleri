#include <iostream>
using namespace std;
int main() {

	int boyut;
	cout<<"Satır ve sütun kaç olsun\n>>";
	cin>>boyut;
	for(int i=0; i<boyut; i++) {
	  int y,b;
	  if(i<boyut/2){y=2*i+1;}
      else if(i==boyut){y=2*i-1;}
	  else{y=2*(boyut-i-1)+1;}
	   for(int j=0; j<(boyut-y)/2; j++){
	     cout<<" ";
	   }
	   for(int j=0; j<y; j++){
	     cout<<"*";
	   }
	   for(int j=0; j<(boyut-y)/2; j++){
	     cout<<" ";
	   }
	   cout<<endl;
	}
  }

