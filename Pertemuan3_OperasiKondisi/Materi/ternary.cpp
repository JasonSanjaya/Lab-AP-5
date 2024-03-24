#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
     int umur;
     string hasil;
     cout<<"umur kamu berapa: ";
     cin>>umur;

    hasil = (umur>1000)? "Kamu bukan manusia":"kamu mungkin manusia"; 
    cout<<hasil;
    return 0;
}