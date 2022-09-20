#include <iostream>
#include <string>

using namespace std;

void bunga_personal_standard (void){
    cout << "\nSuku Bunga Anda Sebesar 1.2%";
}

void bunga_personal_gold (void){

    double saldo;

    cout << "\nMasukkan Saldo Anda (Minimal Saldo $1000) : $ ";
    cin >> saldo;

    if (saldo < 1000){
        cout << "\nMaaf Saldo Anda Tidak Cukup";
    }
    else if (1000 <= saldo < 5000){
        cout << "\nSuku Bunga Anda Sebesar 1.9%";
    }
    else if (saldo >= 5000){
        cout << "\nSuku Bunga Anda Sebesar 2.3%";
    }


}

void bunga_bisnis_standard (void){

    double saldo;

    cout << "\nMasukkan Saldo Anda (Minimal Saldo $1500) : $ ";
    cin >> saldo;

    if (saldo < 1500){
        cout << "\nMaaf Saldo Anda Tidak Cukup";
    }

    else {
        cout << "\nSuku Bunga Anda Sebesar 1.7%";
    }


}

void bunga_bisnis_platinum (void){

    double saldo;

    cout << "\nMasukkan Saldo Anda (Minimal Saldo $10000) : $ ";
    cin >> saldo;

    if (saldo < 10000){
        cout << "\nMaaf Saldo Anda Tidak Cukup";
    }

    else {
        cout << "\nSuku Bunga Anda Sebesar 2.5%";
    }


}

int main () {
    cout  << "\t========= Gadjah Mada Bank =========\n" << endl;

    int tipe_rekening, level;
    double saldo, suku_bunga;

    cout << "\n----------------------------------------------------";
    cout << "\nPilih Jenis Tipe Rekening Anda : " << endl;
    cout << "----------------------------------------------------";

    cout << "\n1. Personal ";
    cout << "\n2. Bisnis";
    cout << "\n----------------------------------------------------";

    cout << "\nTipe Rekening : ";
    cin >> tipe_rekening;
    cout << "----------------------------------------------------";


    if (tipe_rekening == 1){
        cout << "\n\n\n----------------------------------------------------";
        cout << "\nTipe Rekening : Personal " << endl;
        cout << "----------------------------------------------------";

        cout << "\n1. Standard ";
        cout << "\n2. Gold";
        cout << "\n----------------------------------------------------";

        cout << "\nLevel Anda : ";
        cin >> level;
        cout << "----------------------------------------------------";

        if (level == 1){
            cout << "\nMasukkan Saldo Anda (Minimal Saldo $0) : $";
            cin >> saldo;
            bunga_personal_standard ();
        }

        else {
            bunga_personal_gold ();
        }

    }

    else {
        cout << "\n\n\n----------------------------------------------------";
        cout << "\nTipe Rekening : Bisnis " << endl;
        cout << "----------------------------------------------------";

        cout << "\n1. Standard ";
        cout << "\n2. Platinum";
        cout << "\n----------------------------------------------------";

        cout << "\nLevel Anda : ";
        cin >> level;
        cout << "----------------------------------------------------";

        if (level == 1){
            bunga_bisnis_standard ();
        }

        else {
            bunga_bisnis_platinum ();
        }

    }

    return 0;
}