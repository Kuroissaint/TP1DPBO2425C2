#include <iostream>
#include <vector>
#include "ProdukElektronik.cpp"  // langsung include file class
using namespace std;

vector<ProdukElektronik> daftarProduk;
int nextId = 1;

int cariProduk(int id) {
    for (int i = 0; i < daftarProduk.size(); i++) {
        if (daftarProduk[i].getId() == id) {
            return i;
        }
    }
    return -1;
}

void tambahProduk() {
    string nama, desk, model, merek;
    int watt;
    double harga;

    cout << "Masukkan nama produk   : ";
    getline(cin, nama);
    cout << "Masukkan deskripsi     : ";
    getline(cin, desk);
    cout << "Masukkan watt          : ";
    cin >> watt;
    cout << "Masukkan harga         : ";
    cin >> harga;
    cin.ignore();
    cout << "Masukkan model         : ";
    getline(cin, model);
    cout << "Masukkan merek         : ";
    getline(cin, merek);

    ProdukElektronik p(nextId++, nama, desk, watt, harga, model, merek);
    daftarProduk.push_back(p);

    cout << "Produk berhasil ditambahkan!\n";
}

void tampilkanProduk() {
    if (daftarProduk.empty()) {
        cout << "Belum ada produk.\n";
        return;
    }
    for (auto &p : daftarProduk) {
        p.tampilkan();
    }
}

void updateProduk() {
    int id;
    cout << "Masukkan ID produk yang ingin diupdate: ";
    cin >> id;
    cin.ignore();

    int idx = cariProduk(id);
    if (idx == -1) {
        cout << "Produk tidak ditemukan.\n";
        return;
    }

    string nama, desk, model, merek;
    int watt;
    double harga;

    cout << "Masukkan nama baru     : ";
    getline(cin, nama);
    cout << "Masukkan deskripsi baru: ";
    getline(cin, desk);
    cout << "Masukkan watt baru     : ";
    cin >> watt;
    cout << "Masukkan harga baru    : ";
    cin >> harga;
    cin.ignore();
    cout << "Masukkan model baru    : ";
    getline(cin, model);
    cout << "Masukkan merek baru    : ";
    getline(cin, merek);

    daftarProduk[idx] = ProdukElektronik(id, nama, desk, watt, harga, model, merek);

    cout << "Produk berhasil diupdate!\n";
}

void hapusProduk() {
    int id;
    cout << "Masukkan ID produk yang ingin dihapus: ";
    cin >> id;

    int idx = cariProduk(id);
    if (idx == -1) {
        cout << "Produk tidak ditemukan.\n";
        return;
    }

    daftarProduk.erase(daftarProduk.begin() + idx);
    cout << "Produk berhasil dihapus!\n";
}

void cariDanTampilkanProduk() {
    int id;
    cout << "Masukkan ID produk yang ingin dicari: ";
    cin >> id;

    int idx = cariProduk(id);
    if (idx == -1) {
        cout << "Produk tidak ditemukan.\n";
        return;
    }

    daftarProduk[idx].tampilkan();
}

int main() {
    int pilihan;
    do {
        cout << "\n<<< SILAKAN KELOLA PRODUK DI TOKO ANDA >>>\n";
        cout << "1. Tambah Produk\n";
        cout << "2. Tampilkan Semua Produk\n";
        cout << "3. Update Produk\n";
        cout << "4. Hapus Produk\n";
        cout << "5. Cari Produk\n";
        cout << "0. Keluar\n\n";
        cout << "Pilih command: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1: tambahProduk(); break;
            case 2: tampilkanProduk(); break;
            case 3: updateProduk(); break;
            case 4: hapusProduk(); break;
            case 5: cariDanTampilkanProduk(); break;
            case 0: cout << "Keluar dari program.\n"; break;
            default: cout << "Pilihan tidak valid!\n"; break;
        }
    } while (pilihan != 0);

    return 0;
}
