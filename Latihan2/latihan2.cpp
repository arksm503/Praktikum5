#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
        cout<< "Input A : ";
        cin>>a;
        cout<< "Input B : ";
        cin>>b;
        cout<< "Input C : ";
        cin>>c;
            if(a+b==c || a+c==b || b+c==a){
                cout<<"Benar";
            }else
                cout<<"Salah";

return 0;
}
