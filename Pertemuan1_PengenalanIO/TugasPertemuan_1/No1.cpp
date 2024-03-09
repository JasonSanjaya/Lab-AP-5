#include<iostream>// Library untuk input/output standar
#include<iomanip>// Library untuk menggunakan fungsi setprecision()
#include<string>// Library untuk tipe data string
using namespace std;// perintah ini digunakan untuk mendeklarasikan/ memberitahukan kepada compiler bahwa kita akan menggunakan semua fungsi/class/file yang terdapat dalam namespace std

int main()
{
    string nama,nim;// Mendeklarasikan variabel nama dan nim dengan tipe data string untuk menyimpan teks
    char kom[1];// Mendeklarasikan array karakter kom dengan isi maksimal 2 karakter untuk menyimpan kode KOM
    float ipk;// Mendeklarasikan variabel ipk dengan tipe data float untuk menyimpan angka desimal

    cout<<"===Program Data Mahasiswa===\n";// Menampilkan judul program
    cout<<"Masukan Nama Mahasiswa: ";// Menampilkan pesan untuk memasukkan nama mahasiswa
    getline(cin,nama);// Mengambil input nama mahasiswa dari pengguna
    cout<<"Masukan NIM Mahasiswa: ";// Menampilkan pesan untuk memasukkan NIM mahasiswa
    cin>>nim;// Mengambil input NIM mahasiswa dari pengguna
    cout<<"Masukan KOM Mahasiswa: ";// Menampilkan pesan untuk memasukkan KOM mahasiswa
    cin>>kom;// Mengambil input KOM mahasiswa dari pengguna
    cout<<"Masukan Nilai IPK Mahasiswa: ";// Menampilkan pesan untuk memasukkan nilai IPK mahasiswa
    cin>>ipk;// Mengambil input nilai IPK mahasiswa dari pengguna

    kom[0] = toupper(kom[0]);// Mengonversi huruf pertama kode KOM menjadi huruf besar
    cout<<fixed<<setprecision(2);// Mengatur output bilangan pecahan dengan notasi desimal dan presisi 2 angka di belakang koma

    system("CLS");// Membersihkan layar
    cout<<"===Data Mahasiswa==="<<endl;// Menampilkan pesan untuk menunjukkan bahwa data mahasiswa akan ditampilkan
    cout<<"Nama: "<<nama<<endl;// Menampilkan nama mahasiswa
    cout<<"NIM: "<<nim<<endl;// Menampilkan NIM mahasiswa
    cout<<"KOM: "<<kom<<endl;// Menampilkan KOM mahasiswa
    cout<<"IPK: "<<ipk<<endl;// Menampilkan IPK mahasiswa
    system("pause");// Memberikan pesan "Press any key to continue..." sebelum menutup program

    return 0;// Mengembalikan nilai 0 sebagai tanda bahwa program berakhir dengan sukses
}