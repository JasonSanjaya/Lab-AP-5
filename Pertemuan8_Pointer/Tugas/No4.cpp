#include <iostream>
#include <iomanip>// untuk setpresicion 
using namespace std;
//ambil isi dari alamat angka 1 dan angka 2 
void kalkulator(int* angka1, int* angka2, char operasi){
    switch (operasi) {
        case '+':
            cout << "Hasil penjumlahan: " << (*angka1 + *angka2) << endl;
            break;
        case '-':
            cout << "Hasil pengurangan: " << (*angka1 - *angka2) << endl;
            break;
        case '*':
            cout << "Hasil perkalian: " << (*angka1 * *angka2) << endl;
            break;
        case '/':
            if (*angka2 != 0)
                cout << "Hasil pembagian: "<<fixed<<setprecision(2)<<((float)*angka1 / *angka2)<<endl;//disini pakai set presicion << endl;
            else
                cout << "Pembagian dengan nol tidak diperbolehkan." << endl;
            break;
        default:
            cout << "Operasi tidak valid!" << endl;
    }
}

int main() {
    char ulangi;
    do {
        int angka1, angka2;
        char operasi;
        system("CLS");
        cout << "Masukkan dua angka: ";
        cin >> angka1 >> angka2;

        cout << "Masukkan operasi (+, -, *, /): ";
        cin >> operasi;

        kalkulator(&angka1, &angka2, operasi);//ambil alamat angka 1 dan angka 2

        cout << "Lakukan operasi lagi? (y/n): ";
        cin >> ulangi;
    } while (ulangi == 'y' || ulangi == 'Y');

    return 0;
}
