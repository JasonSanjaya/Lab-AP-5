#include <iostream>// Library untuk input/output standar
#include <iomanip>// Library untuk menggunakan fungsi setprecision()
using namespace std;// perintah ini digunakan untuk mendeklarasikan/ memberitahukan kepada compiler bahwa kita akan menggunakan semua fungsi/class/file yang terdapat dalam namespace std

int main()
{
    float meter, kilometer;// Mendeklarasikan variabel meter dan kilometer dengan tipe data float untuk menyimpan angka desimal

    cout << fixed;// Mengatur output bilangan pecahan dengan notasi desimal
    cout << "===Program Mengubah Meter menjadi Kilometer===\n";// Menampilkan judul program
    cout << "Masukan Jarak dalam Meter: ";// Menampilkan pesan untuk memasukkan nilai jarak dalam meter
    cin >> meter;// Mengambil input nilai jarak dalam meter dari pengguna

    kilometer = float(meter) / 1000;// Menghitung nilai meter menjadi satuan kilometer

    cout << "Jarak yang Anda masukan dalam Kilometer: " << setprecision(5) << kilometer << endl;// Menampilkan nilai jarak dalam kilometer dengan menggunakan presisi 5 angka di belakang koma
    system("pause");// Menggunakan system call untuk memberikan pesan "Press any key to continue..." sebelum menutup program

    return 0;// Mengembalikan nilai 0 sebagai tanda bahwa program berakhir dengan sukses
}
