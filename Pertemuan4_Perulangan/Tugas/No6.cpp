#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int angka,kuadrat=0,hasil=0;

    cout<<"Program Jumlah Kuadrat Bilangan Genap\n";
    cout<<"Masukan angka: ";
    cin>>angka;

    for (int i = 2; i<=angka;i+=2)
    {
        kuadrat=i*i;
        hasil+=kuadrat;
    }
    cout<<hasil;
    
    return 0;
}