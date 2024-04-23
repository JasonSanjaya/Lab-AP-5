#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int tinggi;

    cout<<"Input Tinggi Diamond: ";
    cin>>tinggi;

    for (int i = 1; i<= tinggi; i++){
        for (int j = tinggi; j>i;j--){
            cout<<" ";
        }
        for(int k = 1; k<i-2;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int x = 1; x<= tinggi-4; x++){
        for (int y = 1; y<=x;y++){
            cout<<" ";
        }
        for(int z =tinggi-3; z>x ;z--){
            cout<<"* ";
        }
        cout<<endl;
    }
        
    
    
    return 0;
}