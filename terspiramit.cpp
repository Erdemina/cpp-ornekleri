#include <iostream>
using namespace std;
int main() {
	int boyut;
	cout<<"Boyutu kaç olsun ?\n>>";
	cin>>boyut; //piramidin uzunluğunu seçtiriyoruz.
	int bosluk=0; 
	for (; boyut>=1; boyut--) { //girilen boyut kadar satır olacağı için for döngüsüyle boyut kadar satır yazmasını sağlıyoruz. 
		
		for (int i=0; i<=bosluk; i++) { // * koymadan önceki boşluklar için bir for döngüsü.
		     cout<<" "; //
		}
		bosluk++;
	    for(int x=1; x<=boyut; x++) { // * koymak için gereken for döngüsü.
			cout<<"*";
		}
        
		cout<<endl;
	}
}
