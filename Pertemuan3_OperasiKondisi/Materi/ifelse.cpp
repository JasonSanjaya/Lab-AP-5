#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    char nilai;

    cout<<"Berapa nilai kamu: ";
    cin>>nilai;

    if (nilai == 'A')
    {
        cout<<"Bagus, Pertahankan";
    }
    else if (nilai == 'B') 
    {
        cout<<"Bagus";
    }
    else if (nilai == 'C')
    {
        cout<<"Jelek";
    } 
    else if (nilai == 'D')
    {
        cout<<"Jelek";
    }
    else if (nilai == 'E')
    {
        cout<<"Sangat jelek";
    }
    else {
        cout<<"invalid,silahkan input dengan benar";
    }
    
    return 0;
}