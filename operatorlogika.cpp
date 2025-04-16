#include<iostream>
using namespace std;

int main() {
    bool output;

    // Operator "==" (sama dengan)
    output = (2 == 4);  // False, karena 2 tidak sama dengan 4
    cout << "Output 2 == 4: " << output << endl;

    // Operator "not" (!), membalikkan hasil
    output = not(2 == 4);  // True, karena hasil kebalikannya
    cout << "Output not(2 == 4): " << output << endl;

    output = !(2 == 2);  // False, kebalikan dari true (2 == 2)
    cout << "Output !(2 == 2): " << output << endl;

    // Operator "and" (&&), hanya true jika kedua kondisi benar
    output = (2 < 4) and (2 > 1);  // True, karena kedua kondisi benar
    cout << "Output (2 < 4) and (2 > 1): " << output << endl;

    output = (2 < 4) and (2 < 1);  // False, karena salah satu kondisi salah
    cout << "Output (2 < 4) and (2 < 1): " << output << endl;

    output = (2 > 4) and (2 > 1);  // False, karena salah satu kondisi salah
    cout << "Output (2 > 4) and (2 > 1): " << output << endl;

    output = (2 < 1) and (2 > 3);  // False, karena kedua kondisi salah
    cout << "Output (2 < 1) and (2 > 3): " << output << endl;

    // Operator "or" (||), hanya false jika semua kondisi salah
    output = (2 < 4) or (2 > 1);  // True, karena salah satu kondisi benar
    cout << "Output (2 < 4) or (2 > 1): " << output << endl;

    output = (2 < 4) or (2 < 1);  // True, karena salah satu kondisi benar
    cout << "Output (2 < 4) or (2 < 1): " << output << endl;

    output = (2 > 4) or (2 > 1);  // True, karena salah satu kondisi benar
    cout << "Output (2 > 4) or (2 > 1): " << output << endl;

    output = (2 < 1) or (2 > 3);  // False, karena kedua kondisi salah
    cout << "Output (2 < 1) or (2 > 3): " << output << endl;

    return 0;
}