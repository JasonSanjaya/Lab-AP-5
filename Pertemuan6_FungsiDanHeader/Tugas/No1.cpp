#include <iostream>
#include <typeinfo> 
using namespace std;

string fizzBuzz(int angka) {
    if (angka % 3 == 0 && angka % 5 == 0) {
        return "FizzBuzz";
    } else if (angka % 3 == 0) {
        return "Fizz";
    } else if (angka % 5 == 0) {
        return "Buzz";
    } else {
        return to_string(angka); // Ubah angka menjadi string
    }
}

void generateSeries(int n) {
    int i = 2; 
    int increment = 4;
    string lastType = "";
    int lastNonFizzBuzzNumber = 0; // Menyimpan angka terakhir yang bukan Fizz, Buzz, atau FizzBuzz
    
    for (int j = 1; j <= n; ++j) {
        lastType = fizzBuzz(i);
        if (lastType != "Fizz" && lastType != "Buzz" && lastType != "FizzBuzz") {
            lastNonFizzBuzzNumber = i;
        }
        cout << lastType;
        if (j != n) { 
            cout << ", ";
        }
        i += increment;
        increment += 2;
    }
    
    // Menampilkan angka terakhir yang tidak memenuhi algoritma FizzBuzz
    cout << "\nTipe data "<< lastNonFizzBuzzNumber<<" adalah "<< typeid(lastNonFizzBuzzNumber).name() << endl;
}

int main() {
    int input;
    cout<<"===Program FizzBuzz===\n";
    cout << "Masukkan Angka: ";
    cin >> input;

    if (input >= 3 && input <= 100) {
        cout << "Deret angka: ";
        generateSeries(input);
    } else {
        cout << "Input tidak valid, berikan nilai dengan rentang 3-100." << endl;
    }

    return 0;
}