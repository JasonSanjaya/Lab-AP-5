#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

int main(){
    system("CLS");
    vector<int> deret;
    string angka;
    
    cout<<"===Program Vektor===\n";
    cout<<"Masukan angka yang dipisah dengan spasi: ";
    getline(cin,angka);
    
    stringstream stream(angka);
    int nomor;
    while(stream>>nomor){
        deret.push_back(nomor);
    }
    
    cout<<"Deret angka: ";
    for (int i :deret){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Panjang vektor: "<<deret.size()<<endl;

    while (!deret.empty()) {
        cout << deret.front() << endl;
        deret.erase(deret.begin());
    }
    cout<<"Panjang vektor: "<<deret.size()<<endl;
}