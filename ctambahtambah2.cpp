#include<iostream>
using namespace std;

int main(){
    string aktivitas;
    string tempat;

    cout << "Apa aktivitas anda: ";
    cin >> aktivitas;

    cout << "Dimana anda " << aktivitas << " : ";
    cin >> tempat;

    cout << "Saya sedang " << aktivitas << " di " << tempat << endl;
    

    return 0;
}