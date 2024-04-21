#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    string kalimat,kalimat_baru;
    char huruf;
    int karakter;

    cout<<"Program Kalimat\n";
    cout<<"Masukan Kalimat: ";
    getline(cin,kalimat);
    cout<<"Masukan Huruf: ";
    cin>>huruf;

    karakter=0;
    kalimat_baru="";
    for (char c:kalimat){
        if (c != toupper(huruf)&& c!=tolower(huruf)){
            kalimat_baru +=c;
        }else{
            karakter++;
        }
    }
    
    cout<<kalimat_baru<<endl;
    cout<<"Karakter Terhapus= "<<karakter;
    
    return 0;
}