#include <iostream>
using namespace std;
int main() {
	int boyut;
	cout<<"Boyutu kaç olsun ?\n>>";
	cin>>boyut;
	int bosluk=0;
	for (; boyut>=1; boyut--) {
		
		for (int i=0; i<=bosluk; i++) {
		     cout<<" ";
		}
		bosluk++;
	    for(int x=1; x<=boyut; x++) {
			cout<<"*";
		}
        
		cout<<endl;
	}
}
