from produk_elektronik import ProdukElektronik  # sesuaikan dengan nama file

daftar_produk = []
next_id = 1


def cari_produk(id):
    for i, p in enumerate(daftar_produk):
        if p.id == id:
            return i
    return -1


def tambah_produk():
    global next_id
    nama = input("Masukkan nama produk   : ")
    desk = input("Masukkan deskripsi     : ")
    watt = int(input("Masukkan watt          : "))
    harga = float(input("Masukkan harga         : "))
    model = input("Masukkan model         : ")
    merek = input("Masukkan merek         : ")

    p = ProdukElektronik(next_id, nama, desk, watt, harga, model, merek)
    daftar_produk.append(p)
    next_id += 1
    print("Produk berhasil ditambahkan gengs!")


def tampilkan_produk():
    if not daftar_produk:
        print("Belum ada produk.")
        return
    for p in daftar_produk:
        p.tampilkan()


def update_produk():
    id = int(input("Masukkan ID produk yang ingin diupdate: "))
    idx = cari_produk(id)
    if idx == -1:
        print("Produk tidak ditemukan uyy.")
        return

    nama = input("Masukkan nama baru     : ")
    desk = input("Masukkan deskripsi baru: ")
    watt = int(input("Masukkan watt baru     : "))
    harga = float(input("Masukkan harga baru    : "))
    model = input("Masukkan model baru    : ")
    merek = input("Masukkan merek baru    : ")

    daftar_produk[idx] = ProdukElektronik(id, nama, desk, watt, harga, model, merek)
    print("Produk berhasil diupdate uhuy!")


def hapus_produk():
    id = int(input("Masukkan ID produk yang ingin dihapus: "))
    idx = cari_produk(id)
    if idx == -1:
        print("Yahh produk tidak ditemukan.")
        return
    del daftar_produk[idx]
    print("Produk berhasil dihapus huhu!")


def cari_dan_tampilkan_produk():
    id = int(input("Masukkan ID produk yang ingin dicari: "))
    idx = cari_produk(id)
    if idx == -1:
        print("Yahh produk tidak ditemukan.")
        return
    daftar_produk[idx].tampilkan()


def main():
    while True:
        print("\n<=> SILAKAN KELOLA PRODUK TOKO ANDA <=>")
        print("1. Tambah Produk")
        print("2. Tampilkan Semua Produk")
        print("3. Update Produk")
        print("4. Hapus Produk")
        print("5. Cari Produk")
        print("0. Keluar")

        pilihan = input("Pilih command: ")
        if pilihan == "1":
            tambah_produk()
        elif pilihan == "2":
            tampilkan_produk()
        elif pilihan == "3":
            update_produk()
        elif pilihan == "4":
            hapus_produk()
        elif pilihan == "5":
            cari_dan_tampilkan_produk()
        elif pilihan == "0":
            print("Keluar dari program.")
            break
        else:
            print("Pilihan tidak valid!")


if __name__ == "__main__":
    main()
