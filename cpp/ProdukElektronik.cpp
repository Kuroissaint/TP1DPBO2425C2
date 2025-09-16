#include <iostream>
#include <string>
using namespace std;

class ProdukElektronik {
private:
    int id;
    string nama_produk;
    string deskripsi;
    int watt;
    double harga;
    string model;
    string merek;

public:
    // Konstruktor default
    ProdukElektronik() {
        id = 0;
        nama_produk = "";
        deskripsi = "";
        watt = 0;
        harga = 0.0;
        model = "";
        merek = "";
    }

    // Konstruktor dengan parameter
    ProdukElektronik(int id, string nama, string desk, int watt, double harga, string model, string merek) {
        this->id = id;
        this->nama_produk = nama;
        this->deskripsi = desk;
        this->watt = watt;
        this->harga = harga;
        this->model = model;
        this->merek = merek;
    }

    int getId() {
        return id;
    }

    void tampilkan() {
        cout << "ID Produk    : " << id << endl;
        cout << "Nama Produk  : " << nama_produk << endl;
        cout << "Deskripsi    : " << deskripsi << endl;
        cout << "Watt         : " << watt << " W" << endl;
        cout << "Harga        : Rp " << harga << endl;
        cout << "Model        : " << model << endl;
        cout << "Merek        : " << merek << endl;
        cout << "-----------------------------" << endl;
    }
};
