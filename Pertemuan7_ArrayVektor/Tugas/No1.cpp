#include <iostream>
using namespace std;

int pascal (int x , int y){
    int num = 1;
    for (int i = 0; i < y-1; i++) {
        num = num * (x-1 - i) / (i + 1);
    }
    return num;
}


int main() {
    system("CLS");
    int tinggi;
    int x,y;

    cout<<"===Program Segitiga Pascal===\n";
    cout<<"Masukan tinggi segitiga pascal: ";
    cin>>tinggi;
    
    for (int i = 0; i<tinggi;i++){
        for (int j = tinggi; j > i; j--) {
            cout << " ";
        }
        int num = 1;
        for (int j = 0; j <= i; j++){
            cout<<num<<" ";
            num = num * (i - j) / (j + 1);
        }
        cout<<endl;
    }
    cout<<"Syarat:\n";
    cout<<"1. Dua buah bilangan x dan y (1<=x,y<=30)\n2. y<=x\n";
    printf("Masukan dua buah bilangan x dan y yang dipisah dengan spasi: ");
    scanf("%d%d",&x,&y);
    if ((y <= 30 && y >= 1) && (x <= 30 && x >= 1) && y <= x){
        int hasil = pascal (x,y);
        cout<<"Hasil: "<<hasil;
    }else{
       cout<<"Masukan Sesuai Syarat yang Tertera!";
    }
    
    return 0;
}