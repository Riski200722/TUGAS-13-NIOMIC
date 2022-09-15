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
    Rumah pertama[2];
    pertama[0].tipe_rumah = "46A";
    pertama[0].jumlah_kamar = 2;
    pertama[0].luas_rumah = 40.7;
    pertama[0].tinggi_rumah = 13.5;
    pertama[0].pemilik_rumah = "Rendi";

    cout << "Pemilik Rumah : " << pertama[0].pemilik_rumah << endl;
    cout << "Tipe Rumah : " << pertama[0].tipe_rumah << endl;
    cout << "Jumlah Kamar : " << pertama[0].jumlah_kamar << endl;
    cout << "Luas Rumah : " << pertama[0].luas_rumah << endl;
    cout << "Tinggi Rumah : " << pertama[0].tinggi_rumah << endl;

    cout << endl;

    pertama[1].tipe_rumah = "42A";
    pertama[1].jumlah_kamar = 5;
    pertama[1].luas_rumah = 120.5;
    pertama[1].tinggi_rumah = 20.5;
    pertama[1].pemilik_rumah = "Ahmad";

    cout << "Pemilik Rumah : " << pertama[1].pemilik_rumah << endl;
    cout << "Tipe Rumah : " << pertama[1].tipe_rumah << endl;
    cout << "Jumlah Kamar : " << pertama[1].jumlah_kamar << endl;
    cout << "Luas Rumah : " << pertama[1].luas_rumah << endl;
    cout << "Tinggi Rumah : " << pertama[1].tinggi_rumah << endl;

    return 0;
}