#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
     int tinggi;
     string hasil;
     cout<<"tinggi kamu berapa: ";
     cin>>tinggi;

    hasil = (tinggi>200)? "Kamu merupakan pemain basket":"kamu manusia"; 
    cout<<hasil;
    return 0;
}