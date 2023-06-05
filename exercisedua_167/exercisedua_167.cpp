#include <iostream>
#include <string>
#include <vector>
using namespace std;


// Pengarang dan Buku
class Pengarang {
public:
    string namaPengarang;
    vector<string> penerbit;
    vector<string> judulBuku;
   

    Pengarang(string _namaPengarang) {
        namaPengarang = _namaPengarang;
    }
};

// Penerbit
class Penerbit {
public:
    string namaPenerbit;
    vector<string> penerbit;

    Penerbit(string _namaPenerbit) {
        namaPenerbit = _namaPenerbit;
    }
};

int main() {
    // pengarang
    Pengarang joko("Joko");
    Pengarang lia("Lia");
    Pengarang giga("Giga");
    Pengarang asroni("Asroni");

    // Buku beserta pengarang
    joko.judulBuku = { "Fisika", "Algoritma" };
    lia.judulBuku = { "Basis Data" };
    giga.judulBuku = { "Matematika", "Multimedia 1" };
    asroni.judulBuku = { "Dasar Pemrograman" };
   
    

    //  penerbit
    Penerbit gamaPress("Gama Press");
    Penerbit intanPariwara("Intan Pariwara");

    // Pengarang yang mengikuti penerbit
    giga.penerbit = { "Game Press", "Intan Pariwara" };

    //  penerbit
    gamaPress.penerbit = { lia.namaPengarang, joko.namaPengarang, giga.namaPengarang };
    intanPariwara.penerbit = { giga.namaPengarang, asroni.namaPengarang };



    // Daftar pengarang pada penerbit "Gama Press"
    cout << "Daftar pengarang pada penerbit \"Gama Press\":" << endl;
    for (const string& nama : gamaPress.penerbit) {
        cout << nama << endl;
    }
    cout << "=========================================" << endl;

    // Daftar pengarang pada penerbit "Intan Pariwara"
    cout << "Daftar pengarang pada penerbit \"Intan Pariwara\":" << endl;
    for (const string& nama : intanPariwara.penerbit) {
        cout << nama << endl;
    }
    cout << "=========================================" << endl;

    // Daftar penerbit yang diikuti "Giga"
    cout << "Daftar penerbit yang diikuti \"Giga\":" << endl;
    for (const string& nama : giga.penerbit) {
        cout << nama << endl;
    }
    cout << "=========================================" << endl;

    // Buku yang dikarang "Joko"
    cout << "Daftar buku yang dikarang \"Joko\":" << endl;
    for (const string& judulBuku : joko.judulBuku) {
        cout << judulBuku << endl;
    }
    cout << "=========================================" << endl;

    // Buku yang dikarang "Lia"
    cout << "Daftar buku yang dikarang \"Lia\":" << endl;
    for (const string& judulBuku : lia.judulBuku) {
        cout << judulBuku << endl;
    }
    cout << "=========================================" << endl;

    // Buku yang dikarang "Asroni"
    cout << "Daftar buku yang dikarang \"Asroni\":" << endl;
    for (const string& judulBuku : asroni.judulBuku) {
        cout << judulBuku << endl;

        cout << "=========================================" << endl;
    }

    // Buku yang dikarang "Giga"
    cout << "Daftar buku yang dikarang \"Giga\":" << endl;
    for (const string& judulBuku : giga.judulBuku) {
        cout << judulBuku << endl;
    }

    return 0;
}

