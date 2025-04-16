







#include<iostream>
using namespace std;

int main(){
    string aktivitas;
    string tempat;
    int umur;

    cout << "Apa aktivitas anda cuy: ";
    getline(cin, aktivitas);

    cout << "Dimana anda " << aktivitas << " : ";
    getline(cin, tempat);

    cout << "Usia berapa anda: ";
    cin >> umur;

    cin.ignore();  // Menghapus karakter newline yang tersisa di buffer
    
    cout << "Saya sedang " << aktivitas << " di " << tempat << endl;
    cout << "Usia saya adalah " << umur << " Tahun" << endl;

    return 0;
}