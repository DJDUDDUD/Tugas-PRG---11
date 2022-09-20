#include <iostream>
#include <string>

using namespace std;

string tipe_film;

void lanjutkan (void){
    int umur;
    char status_pergi;

    cout << "Masukan umur anda : ";
    cin >> umur;

    if (umur < 16) {
        
        cout << "Anda pergi dengan orang tua? (y/n) : ";
        cin >> status_pergi;

        if (umur < 13) {
            if (status_pergi == 'y') {
                tipe_film = "G, PG";
            }
            else {
                tipe_film = "G";
            }
        }
        else if (umur >= 13) {
            tipe_film = "G, PG";
        }
        else {
            tipe_film = "G, PG, R";
        }

    }

    else {
        tipe_film = "G, PG, R";
    }


    cout << "\n----------------------------------------------------------\n" << endl;

    cout << "Tipe film yang bisa anda tonton adalah : " << tipe_film << endl;
}

void opsi_menonton (void){
    int opsi;

    cout << "\nAnda Dapat menonton di waktu siang dan malam hari" << endl;
    cout << "\nTekan 1 jika ingin menonton pertunjukan di siang hari, atau";
    cout << "\nTekan 2 Jika ingin menonton pertunjukan di malam hari" << endl;
    cin >> opsi;

    if(opsi == 1){
        cout << "\nAnda akan menonton di siang hari !";
    }

    else {
        cout << "Anda akan menonton di malam hari !";
    }

    cout << "\n----------------------------------------------------------\n" << endl;

    lanjutkan();
}

void opsi_menonton2 (void){
    char status_opsi;
    cout << "\nAnda hanya dapat menonton pada siang hari, lanjutkan (y/n)";
    cin >> status_opsi;

    if(status_opsi == 'y'){
        cout << "\n----------------------------------------------------------\n" << endl;
        lanjutkan();
    }

    else{
        cout << "\nSampai Jumpa, Terima Kasih....";
    }
}

int main () {

    cout << "\t======= Gadjah Mada Cinema =======\n\n" << endl;

    int umur; 
    double uang_saku;
    char status_pergi;

    cout << "Masukan jumlah uang saku anda : $ ";
    cin >> uang_saku;

    if (uang_saku > 10.50){
        opsi_menonton();
    }
    else if (uang_saku > 7.50){
        opsi_menonton2();
    }
    else if (uang_saku <= 7.50) {
        cout << "\nMaaf, uang anda tidak cukup untuk menonton Film" << endl;
        cout << "\n----------------------------------------------------------\n";
        cout << "Sampai Jumpa, Terima Kasih :)";
        cout << "\n----------------------------------------------------------\n" << endl;
    }

    return 0;

}