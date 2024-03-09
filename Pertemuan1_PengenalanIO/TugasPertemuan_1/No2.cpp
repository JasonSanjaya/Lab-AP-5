#include <iostream>// Library untuk input/output standar
#include<string>// Library untuk tipe data string
using namespace std;// perintah ini digunakan untuk mendeklarasikan/ memberitahukan kepada compiler bahwa kita akan menggunakan semua fungsi/class/file yang terdapat dalam namespace std

int main()
{
    string nama1,nama2;// Mendeklarasikan variabel nama1 dan nama2 dengan tipe data string untuk menyimpan nama

    cout<<"===Program Perbedaan Fungsi Cin Dengan Getline===\n";// Menampilkan judul program
    cout<<"Masukan Nama Lengkap Kawan Anda: ";// Menampilkan pesan untuk memasukkan nama lengkap teman pengguna
    getline(cin,nama2);// Mengambil input nama lengkap teman menggunakan fungsi getline()
    cout<<"Masukan Nama Lengkap Anda: ";// Menampilkan pesan untuk memasukkan nama lengkap pengguna
    cin>>nama1;// Mengambil input nama lengkap pengguna menggunakan operator cin
   
    system("CLS");// Membersihkan layar konsol
    cout<<"Nama Anda dengan Fungsi Cin: "<<nama1<<endl;// Menampilkan nama pengguna yang diinput menggunakan cin
    cout<<"Nama Kawan Anda dengan Fungsi Getline: "<<nama2<<endl; // Menampilkan nama teman yang diinput menggunakan getline()
    system("pause");// Memberikan pesan "Press any key to continue..." sebelum menutup program

    return 0;// Mengembalikan nilai 0 sebagai tanda bahwa program berakhir dengan sukses
}