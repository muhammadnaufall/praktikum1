#include <iostream>
using namespace std;

int suku, a, b, c;

int main()
{
    cout<<"Menampilkan Deret Fibonacci"<<endl<<endl;
    cout<<"Masukkan nilai suku : ";
 cin>>suku;

    cout<<"Bilangannya adalah: "<<endl;
    a=0;
 b=1;
    cout<<a<<endl<<b<<endl;
    for(int i=3; i<=suku; i++)
    {
        c = a + b;
        a = b;
        b = c;

        cout<<c<<endl;
    }
}


