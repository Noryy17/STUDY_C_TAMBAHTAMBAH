#include<iostream>
using namespace std;

int main(){
    int a, hasil;
    cout << " Masukkan Bilangan = ";
    cin >>a;
    hasil = a % 2;
    string jenis = hasil == 1 ? "Ganjil" : "Genap";

    cout<<"bilangan "<<a<<" termasuk bilangan "<<jenis; 
}