#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){
    system("CLS");
    string kalimat;
    
    cout<<"===Program Kalimat===\n";
    cout<<"Masukan sebuah kalimat:";
    getline(cin,kalimat);
    
    for(char &c : kalimat) {
        c = toupper(c);
    }
    
    int panjangkalimat = kalimat.length();
    string kiri = kalimat.substr(0,panjangkalimat/2);
    string kanan = kalimat.substr(panjangkalimat/2,panjangkalimat);
    reverse(kiri.begin(),kiri.end());
    reverse(kanan.begin(),kanan.end());
    
    cout<<kiri<<kanan;
}