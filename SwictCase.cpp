#include<iostream>
using namespace std;

int main(){
    int pil;
    string gender;

    cout<<"Pilihan Salah Satu : "<< endl;
    cout<<"1. Laki-Laki\n2. Perempuan"<<endl;
    cout<<"Pilihan : ";
    cin>>pil;

    switch(pil){
        case 1 :
        gender = "Laki-Laki" ;
        break;
        case 2 :
        gender = "Perempuan" ;
        break;
        default :
        gender = "Pilihan Salah";
        break;
    }
    cout<<" Jenis Kelamin Anda Adalah "<<gender;
}