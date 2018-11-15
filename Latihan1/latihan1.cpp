#include <iostream>
using namespace std;

int main() {
    int n,hasil=0;
    do {
        cout<<"Input N : ";
        cin>>n;

        if(n>hasil){
            hasil=n;
        }
    }
    while(n!=0);

        cout<<hasil;


return 0;
}


