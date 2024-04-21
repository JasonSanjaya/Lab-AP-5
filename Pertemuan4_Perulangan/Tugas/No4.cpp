#include <iostream>
using namespace std;

int main() {
    system("CLS");
    string kalimat;
    int angka;

    cout<<"Program Hore\n";
    cout<<"Syarat: "<<endl<<"1. Angka harus berada diantara 1 hingga 10.000\nSelamat Mencoba!!\n";
    cout<<"Masukan Angka: ";
    cin>>angka;

    kalimat = "Hore!";
    if(angka >= 1 && angka <= 10000){
       kalimat = 'H'+string(angka,'o')+'r'+string(angka,'e')+string(angka,'!');
       cout<<"Hasil: "<<kalimat;
    }else{
        cout<<"Masukan Inputan yang Valid :)";
    }    
    return 0;
}