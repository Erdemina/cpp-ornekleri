#include "unistd.h"
#include <iostream>
using namespace std;
int main() {
    int pi=3.14;
    double rd,rk,hk;
    cout <<"Dairenin yari capi kac olsun ?" <<endl;
    cin >> rd;
    cout <<"Koninin yari capi ne olsun ?"<<endl;
    cin >> rk;
    cout <<"Koninin yuksekligi ne olsun ?"<<endl;
    cin >> hk;
    long daireninalani=pi*rd*rd,konininalani=pi*rk*rk*hk/3;
    
    konininalani>daireninalani ? cout<<"Koninin alani dairenin alanindan buyuk."<<endl:cout<<"Dairenin alani koninin alanindan buyuk."<<endl;
    if (konininalani==daireninalani)
    {
        cout<<"Koninin alani ve dairenin alani birbirine esit."<<endl;
    }
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Koninin alani="<<konininalani<<"\t";
    cout<<"Dairenin alani="<<daireninalani<<endl;    
    cout<<"-----------------------------------------------"<<endl;
    

}