#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int x, *px;
    x = 25;
    px = &x;
    *px = x;
    cout<<"Pertanyaan:\n";
    cout<<"(1) px = &x"<<endl;
    cout<<"(2) *px = x"<<endl<<"Apakah (1) ekuivalen dengan (2)?\n";
    cout<<"Alamat X: "<<&x<<endl;
    cout<<"Alamat Pointer Px: "<< px<<endl;
    cout<<"Nilai Px: "<<*px<<endl;
    cout<<"Nilai X: "<<x<<endl;
    cout<<"Dikarenakan alamat dari px dengan X sama dan nilai dari px dengan X sama maka pernyataan 1 ekuivalen dengan pernyataan 2";
    
    return 0;
}