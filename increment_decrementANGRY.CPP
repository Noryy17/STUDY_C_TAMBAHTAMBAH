#include <iostream>
#include <iomanip>

using namespace std;

void tampilkanJudul() {
    cout << "\nPROGRAM DEMONSTRASI INCREMENT DAN DECREMENT C++\n";
    cout << "-------------------------------------------------\n\n";
}

void tampilkanHasil(const string& operasi, int nilai_awal, int nilai_akhir) {
    cout << setw(20) << left << operasi << ": " << nilai_awal << " → " << nilai_akhir << endl;
}

int main() {
    int a;

    tampilkanJudul();
    cout << "Masukkan sebuah angka: ";
    cin >> a;
    cout << endl;

    // Demonstrasi Increment dan Decrement
    int temp = a;
    tampilkanHasil("Pre-Increment (++a)", temp, ++temp);
    
    temp = a;
    int before = temp;
    tampilkanHasil("Post-Increment (a++)", before, temp++);
    
    temp = a;
    tampilkanHasil("Pre-Decrement (--a)", temp, --temp);
    
    temp = a;
    before = temp;
    tampilkanHasil("Post-Decrement (a--)", before, temp--);

    cout << "\nTerima kasih telah mencoba program ini!\n";

    return 0;
}
