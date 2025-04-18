#include<iostream>
using namespace std;

int main(){

    double L, a, t;

    cout << "Menghitung Luas Segitiga" << endl;
    cout << "Masukkan alas   = ";
    cin >> a;

    cout << "Masukkan tinggi   = ";
    cin >> t;

    L = (a * t) / 2;  // Menghitung luas segitiga

    cout << "Noh Hasil Luas Segitiga Loh Yang di ketahui : " << endl;
    cout << "Alas   = " << a << " cm" << endl;
    cout << "Tinggi   = " << t << " cm" << endl;
    cout << "Adalah : " << endl;
    
    cout << "L = (a x t)/2   = (" << a << " x " << t << ")/2" << endl;
    cout << " Hasil L Yang di ketahui = " << L << "cm" << endl;
    

    return 0;
}