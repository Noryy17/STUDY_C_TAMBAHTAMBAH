#include <iostream>
#include <string>
using namespace std;

int main() {
    string aktivitas, tempat;
    int umur;

    cout << "Apa aktivitas anda: ";
    getline(cin, aktivitas);

    cout << "Dimana anda " << aktivitas << " : ";
    getline(cin, tempat);

    cout << "Usia anda: ";
    cin >> umur;

    cin.ignore(); // Membersihkan buffer setelah `cin >> umur`

    cout << "\n--- Informasi Anda ---\n";
    cout << "Saya sedang " << aktivitas << " di " << tempat << endl;
    cout << "Usia saya " << umur << " tahun.\n";

    return 0;
}
