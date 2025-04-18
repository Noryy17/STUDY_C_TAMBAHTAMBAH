#include<iostream>
#include<string>
using namespace std;

int main(){
    int pilihan, menuPilihan;
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

                // Menu setelah login
                do {
                    cout << "\nMenu Pilihan:\n";
                    cout << "1. Lihat Profil\n";
                    cout << "2. Ubah Kata Sandi\n";
                    cout << "3. Logout\n";
                    cout << "Masukkan Pilihan: ";
                    cin >> menuPilihan;

                    switch(menuPilihan){
                        case 1:
                            cout << "Profil Anda:\n";
                            cout << "Nama Pengguna: " << namaPenggunaTersimpan << endl;
                            cout << "Kata Sandi: " << kataSandiTersimpan << endl;
                            break;
                        case 2:
                            cout << "Masukkan Kata Sandi Baru: ";
                            cin >> kataSandiTersimpan;
                            cout << "Kata Sandi Berhasil Diubah!\n";
                            break;
                        case 3:
                            cout << "Logout Berhasil! Sampai Jumpa.\n";
                            break;
                        default:
                            cout << "Pilihan Tidak Tersedia. Silakan Coba Lagi.\n";
                    }
                } while(menuPilihan != 3);

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
