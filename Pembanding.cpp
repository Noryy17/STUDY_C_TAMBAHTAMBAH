#include<iostream>
using namespace std;

int main(){
    string namaLengkap;
    string kalimat;

    // Input Nama Lengkap
    cout << "Masukkan nama lengkap Anda: ";
    getline(cin, namaLengkap); // Menerima input termasuk spasi

    // Input Kalimat
    cout << "Masukkan kalimat favorit Anda: ";
    getline(cin, kalimat); // Menerima input kalimat penuh

    // Output
    cout << "-----------------------------" << endl;
    cout << "Nama lengkap Anda: " << namaLengkap << endl;
    cout << "Kalimat favorit Anda: " << kalimat << endl;
    cout << "-----------------------------" << endl;

    return 0;
}