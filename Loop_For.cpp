#include <iostream>
using namespace std;

int main() {
    cout << "Ayo kita hitung bintang!" << endl;

    // Loop For untuk menghitung dari 1 sampai 5
    for (int i = 1; i <= 5; i++) {
        cout << "Bintang ke-" << i << " : ";

        // Cetak bintang sebanyak i
        for (int j = 0; j < i; j++) {
            cout << "*";  // Bisa diganti dengan "⭐" jika terminal mendukung Unicode
        }
        cout << endl;
    }

    cout << "Wah, seru sekali menghitung bintang!" << endl;
    return 0;
}
