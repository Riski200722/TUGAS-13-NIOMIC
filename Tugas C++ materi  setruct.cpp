#include <iostream>
using namespace std;
int main()
{
    struct Rumah
    {
        string tipe_rumah;
        int jumlah_kamar;
        float luas_rumah;
        float tinggi_rumah;
        string pemilik_rumah;
    };
    Rumah pertama;
    pertama.tipe_rumah = "46A";
    pertama.jumlah_kamar = 2;
    pertama.luas_rumah = 40.7;
    pertama.tinggi_rumah = 13.5;
    pertama.pemilik_rumah = "Rendi";

    cout << "Pemilik Rumah : " << pertama.pemilik_rumah << endl;
    cout << "Tipe Rumah : " << pertama.tipe_rumah << endl;
    cout << "Jumlah Kamar : " << pertama.jumlah_kamar << endl;
    cout << "Luas Rumah : " << pertama.luas_rumah << endl;
    cout << "Tinggi Rumah : " << pertama.tinggi_rumah << endl;

    cout << endl;

    Rumah kedua;
    kedua.tipe_rumah = "42A";
    kedua.jumlah_kamar = 5;
    kedua.luas_rumah = 120.5;
    kedua.tinggi_rumah = 20.5;
    kedua.pemilik_rumah = "Ahmad";

    cout << "Pemilik Rumah : " << kedua.pemilik_rumah << endl;
    cout << "Tipe Rumah : " << kedua.tipe_rumah << endl;
    cout << "Jumlah Kamar : " << kedua.jumlah_kamar << endl;
    cout << "Luas Rumah : " << kedua.luas_rumah << endl;
    cout << "Tinggi Rumah : " << kedua.tinggi_rumah << endl;

    return 0;
}