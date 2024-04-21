#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    system("CLS");
      
    int angka;
    bool prima = true; 

    cout << "Program Bilangan Prima\n"; 
    cout << "Masukan Angka: ";
    cin >> angka;

    if (angka <= 1) {
        prima = false;
    } else {
        for (int i = 2; i <= sqrt(angka); i++) { // untuk dibagi dari 2 hingga akar kuadrat angka 
            if (angka % i == 0) {
                prima = false;
                break; 
            }
        }
    }
    
    if (prima) {
        cout << "Prima.";
    } else {
        cout << "Bukan Prima.";
    }
    
    return 0;
}
