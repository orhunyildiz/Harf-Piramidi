#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
    char c;
    
    cout << "Lutfen bir buyuk harf giriniz: ";
    cin >> c;
    
    if((int)c<65 || (int)c>90){
        cout << "Hata! Lutfen buyuk harf giriniz." << endl;
    }
    
    for(int i=c-65;i<26;i++){
        for(int j=c-65;j<=i;j++){
            cout << (char)(j+65);
        }
        for(int j=i-1;j>=c-65;j--){
            cout << (char)(j+65);
        }
        cout << endl;
    }
}
