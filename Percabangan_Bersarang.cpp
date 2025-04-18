#include<iostream>
using namespace std;

int main(){
    int pil, umur;
    string gender, status, Kegiatan;

    cout<<"Pilihan salah (1/2)"<<endl;
    cout<< "1. Laki - Laki\n2. Perempuan"<<endl;
    cout<< "Pilihan : ";
    cin>> pil;
    cout<<"Umur Anda (th) = ";
    cin>>umur;

    if (pil==1){
        gender = "Laki Laki ";
        if(umur >=24){
            status = "Sudah waktunya";
            Kegiatan = "Mencari Jodoh";

        } else {
            status = "Belum Waktunya";
            Kegiatan = "Belajar Njir Jangan Nikah sama Pacaran mulu Blok";
        }
        
        
    } else if (pil == 2){
        gender = "Perempuan";
        if(umur >=22){
            status = "Sudah waktunya";
            Kegiatan = "Mencari Jodoh";

        } else {
            status = "Belum Waktunya";
            Kegiatan = "Belajar Njir Jangan Nikah sama Pacaran mulu Blok";
        }
        
    } else {
        gender = "Lu apa Njir,Aneh";
        gender = "Lu apa Njir,Aneh";
        gender = "Lu apa Njir,Aneh";
    }

    cout<<"=========================================="<<endl;
    cout<<"Anda Adalah "<<gender<<"Berumur "<<umur<<" Tahun "<<endl;
    cout<< status << " Menikah KING !! " << endl;
    cout<< " Silahkan "<<Kegiatan<<" ! "<<endl;
}