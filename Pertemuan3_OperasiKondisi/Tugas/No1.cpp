#include<iostream>
using namespace std;
int main()
{
    int bil;

    cout<<"===Program Bilangan Ganjil atau Genap===\n";
    cout<<"Masukan Sebuah Bilangan Bulat: ";
    cin>>bil;

    if (bil % 2 == 0)
    {
        cout<<"Bilangan yang Anda masukan adalah "<<bil<<" merupakan bilangan genap.";
    }else if (bil % 2 == 1)
    {
        cout<<"Bilangan yang Anda masukan adalah"<<bil<<" merupakan bilangan ganjil.";
    }
    cout<<"\n";
    system("pause");
    return 0;
}