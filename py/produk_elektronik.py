class ProdukElektronik:
    def __init__(self, id, nama_produk, deskripsi, watt, harga, model, merek):
        self.id = id
        self.nama_produk = nama_produk
        self.deskripsi = deskripsi
        self.watt = watt
        self.harga = harga
        self.model = model
        self.merek = merek

    def tampilkan(self):
        print(f"ID Produk   : {self.id}")
        print(f"Nama Produk : {self.nama_produk}")
        print(f"Deskripsi   : {self.deskripsi}")
        print(f"Watt        : {self.watt} W")
        print(f"Harga       : Rp {self.harga}")
        print(f"Model       : {self.model}")
        print(f"Merek       : {self.merek}")
        print("------------------------------")
