#include<iostream>
using namespace std;

int main(){
    int a, hasil;

    cout << "=============================" << endl;
    cout << "     Program Bilangan       " << endl;
    cout << "=============================" << endl;

    cout << "Masukkan bilangan bulat : ";
    cin >> a;

    hasil = a % 2;

    string kondisi = hasil == 1 ? "ganjil" : "genap";

    cout << "-----------------------------" << endl;
    cout << "Angka " << a << " adalah bilangan " << kondisi << "." << endl;
    cout << "-----------------------------" << endl;

    return 0;
}