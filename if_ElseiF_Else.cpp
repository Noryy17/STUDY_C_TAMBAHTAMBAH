#include<iostream>
#include<string>
using namespace std;

int main(){
    int pilihan;
    string namaPengguna, kataSandi; // Variabel untuk menyimpan input
    string namaPenggunaTersimpan = "Shibuya"; // Username default
    string kataSandiTersimpan = "KitaCoba";   // Password default

    cout << "Pilih Salah Satu \n1. Login \n2. Daftar" << endl;
    cout << "Masukkan Pilihan = ";
    cin >> pilihan;

    if(pilihan == 1){
        if(namaPenggunaTersimpan != "" && kataSandiTersimpan != ""){ // Validasi jika sudah ada data tersimpan
            cout << "Masukkan Nama Pengguna: ";
            cin >> namaPengguna;
            cout << "Masukkan Kata Sandi: ";
            cin >> kataSandi;

            if(namaPengguna == namaPenggunaTersimpan && kataSandi == kataSandiTersimpan){
                cout << "Login Berhasil! Selamat Datang, " << namaPengguna << endl;
            } else {
                cout << "Login Gagal! Nama Pengguna atau Kata Sandi salah." << endl;
            }
        } else {
            cout << "Belum ada pengguna terdaftar. Silakan daftar terlebih dahulu." << endl;
        }
    } else if(pilihan == 2){
        cout << "Buat Nama Pengguna: ";
        cin >> namaPenggunaTersimpan;
        cout << "Buat Kata Sandi: ";
        cin >> kataSandiTersimpan;
        cout << "Pendaftaran Berhasil!" << endl;
    } else {
        cout << "Input Salah, Pilihan Tidak Tersedia" << endl;
        
    }

    return 0;
}