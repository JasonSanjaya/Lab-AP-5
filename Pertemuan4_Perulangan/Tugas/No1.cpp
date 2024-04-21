#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int angka,hasil,i;

    cout<<"Program Deret\n";
    cout<<"Masukan Angka: ";
    cin>>angka;
    hasil=1;
    for (i=1; i<angka; i++){
        if (i < 2){
            cout<<hasil;
            cout<<" ";
        }
        if (i % 2 == 0){
            hasil+=3;
            cout<< hasil;
            cout<<" ";
        }
        else{
            hasil+=5;
            cout<<hasil;
            cout<<" ";
        }
    }    
    return 0;
}