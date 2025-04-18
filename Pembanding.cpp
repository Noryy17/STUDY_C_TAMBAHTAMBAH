
#include <iostream>
using namespace std;

int main() {
    int x, y;
    bool kondisi;
    string hasil;

    // Prompt and input for X
    cout << "Masukkan Nilai X: ";
    cin >> x;

    // Prompt and input for Y
    cout << "Masukkan Nilai Y: ";
    cin >> y;

    // Compare the values
    kondisi = (x == y); // Simplified condition
    hasil = kondisi ? "sama dengan" : "tidak sama dengan"; // Simplified ternary operator

    // Display the result
    cout << "Variable X " << hasil << " Variable Y" << endl;

    return 0;

}
 