/*for döngüsünü kullanarak kullanıcının girdiği değerin faktöriyelini bulan programı yazınız.*/
#include "unistd.h"
#include <iostream>
using namespace std;
int main(){
    int i , fakt=1;
    cout<<"Bu bir deneme programidir."<<endl;
    cin>>i;
    for  (; i > 1; i--)
    {
        fakt = fakt*i;
        cout<<fakt<<endl;
        sleep(1);
    }
    
}