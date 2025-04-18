#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    string name;

    // Intro for kids
    cout << " PERMAINAN ANGKA AJAIB \n\n";
    
    // Get kid's name
    cout << "Hai! Siapa namamu? ";
    getline(cin, name);
    
    cout << "\nHai " << name << "! Mari bermain dengan angka ajaib! \n\n";

    // Get favorite number
    cout << " Masukkan angka kesukaanmu: ";
    cin >> number;

    // Increment with fun message
    cout << "\n SIMSALABIM! Angkamu bertambah satu menjadi " << ++number << "! \n";

    // Decrement with fun message
    cout << " HOLAHOOOP! Angkamu berkurang satu menjadi " << --number << "! \n";
    
    // Additional fun interaction
    cout << "\n Angkamu dikali dua jadi " << (number * 2) << "! WOW! \n";
    
    // Closing message
    cout << "\n Terima kasih " << name << " sudah bermain dengan angka ajaib! \n";
    cout << "Sampai jumpa lagi di petualangan berikutnya! \n";

    return 0;
}