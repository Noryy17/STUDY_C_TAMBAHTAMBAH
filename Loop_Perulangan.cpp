#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    // Mendefinisikan warna untuk konsol
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    cout << "=== BELAJAR PERULANGAN YANG SERU! ===" << endl;
    cout << "Halo Teman-Teman! Ayo belajar perulangan yang menyenangkan!" << endl << endl;
    
    // Perulangan for - Menghitung mundur roket
    cout << "1. PELUNCURAN ROKET DENGAN FOR LOOP!" << endl;
    cout << "Kita akan meluncurkan roket dalam: " << endl;
    for (int i = 10; i >= 1; i--) {
        SetConsoleTextAttribute(hConsole, i + 1); // Ganti warna
        cout << i << "... ";
        Sleep(500); // Delay setengah detik
    }
    SetConsoleTextAttribute(hConsole, 12); // Warna merah
    cout << "MELUNCUR!!" << endl << endl;
    SetConsoleTextAttribute(hConsole, 7); // Reset warna
    
    // Perulangan while - Game tebak angka sederhana
    cout << "2. PERMAINAN ULANG DENGAN WHILE LOOP!" << endl;
    char jawaban = 'y';
    int hitungan = 1;
    
    while (jawaban == 'y') {
        cout << "Ini adalah putaran ke-" << hitungan << " dari permainan!" << endl;
        cout << "Mau main lagi? (y/t): ";
        cin >> jawaban;
        hitungan++;
    }
    cout << "Kamu bermain sebanyak " << hitungan-1 << " kali!" << endl << endl;
    
    // Perulangan do-while - Membuat pola bintang
    cout << "3. MEMBUAT POLA BINTANG DENGAN DO-WHILE!" << endl;
    int baris = 5;
    int i = 1;
    
    do {
        SetConsoleTextAttribute(hConsole, i + 8); // Warna bervariasi
        // Membuat spasi
        for (int j = baris - i; j > 0; j--) {
            cout << " ";
        }
        
        // Membuat bintang
        for (int k = 1; k <= 2*i-1; k++) {
            cout << "*";
        }
        cout << endl;
        i++;
    } while (i <= baris);
    
    SetConsoleTextAttribute(hConsole, 7); // Reset warna ke default
    cout << endl << "SELAMAT! Kamu sudah belajar 3 jenis perulangan dalam C++!" << endl;
    cout << "1. For Loop - untuk peluncuran roket" << endl;
    cout << "2. While Loop - untuk permainan berulang" << endl;
    cout << "3. Do-While Loop - untuk membuat pola bintang" << endl;
    
    return 0;
}