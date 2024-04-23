#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int angka;

    cout<<"Masukan Sebuah Angka: ";
    cin>>angka;

    if (angka % 2 ==0){
        cout<<"Angka "<<angka<<" adalah bilangan genap\n";
    }else{
        cout<<"Angka "<<angka<<" adalah bilangan ganjil\n";
    }
    if (angka % 3 == 0){
        cout<<"Angka "<<angka <<" habis dibagi 3\n";
    }else{
        cout<<"Angka "<<angka<<" tidak habis dibagi 3\n";
    }
    if (angka % 5 == 0){
        cout<<"Angka "<<angka <<" habis dibagi 5\n";
    }else{
        cout<<"Angka "<<angka<<" tidak habis dibagi 5\n";
    }
    if (angka % 7 == 0){
        cout<<"Angka "<<angka <<" habis dibagi 7\n";
    }else{
        cout<<"Angka "<<angka<<" tidak habis dibagi 7\n";
    }
    
    
    return 0;
}