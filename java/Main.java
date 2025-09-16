import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static ArrayList<ProdukElektronik> daftarProduk = new ArrayList<>();
    static int nextId = 1;
    static Scanner sc = new Scanner(System.in);

    static int cariProduk(int id) {
        for (int i = 0; i < daftarProduk.size(); i++) {
            if (daftarProduk.get(i).getId() == id) {
                return i;
            }
        }
        return -1;
    }

    static void tambahProduk() {
        System.out.print("Masukkan nama produk   : ");
        String nama = sc.nextLine();
        System.out.print("Masukkan deskripsi     : ");
        String desk = sc.nextLine();
        System.out.print("Masukkan watt          : ");
        int watt = Integer.parseInt(sc.nextLine());
        System.out.print("Masukkan harga         : ");
        double harga = Double.parseDouble(sc.nextLine());
        System.out.print("Masukkan model         : ");
        String model = sc.nextLine();
        System.out.print("Masukkan merek         : ");
        String merek = sc.nextLine();

        ProdukElektronik p = new ProdukElektronik(nextId++, nama, desk, watt, harga, model, merek);
        daftarProduk.add(p);

        System.out.println("Produk berhasil ditambahkan!");
    }

    static void tampilkanProduk() {
        if (daftarProduk.isEmpty()) {
            System.out.println("Belum ada produk.");
            return;
        }
        for (ProdukElektronik p : daftarProduk) {
            p.tampilkan();
        }
    }

    static void updateProduk() {
        System.out.print("Masukkan ID produk yang ingin diupdate: ");
        int id = Integer.parseInt(sc.nextLine());

        int idx = cariProduk(id);
        if (idx == -1) {
            System.out.println("Produk tidak ditemukan.");
            return;
        }

        System.out.print("Masukkan nama baru     : ");
        String nama = sc.nextLine();
        System.out.print("Masukkan deskripsi baru: ");
        String desk = sc.nextLine();
        System.out.print("Masukkan watt baru     : ");
        int watt = Integer.parseInt(sc.nextLine());
        System.out.print("Masukkan harga baru    : ");
        double harga = Double.parseDouble(sc.nextLine());
        System.out.print("Masukkan model baru    : ");
        String model = sc.nextLine();
        System.out.print("Masukkan merek baru    : ");
        String merek = sc.nextLine();

        daftarProduk.set(idx, new ProdukElektronik(id, nama, desk, watt, harga, model, merek));
        System.out.println("Produk berhasil diupdate!");
    }

    static void hapusProduk() {
        System.out.print("Masukkan ID produk yang ingin dihapus: ");
        int id = Integer.parseInt(sc.nextLine());

        int idx = cariProduk(id);
        if (idx == -1) {
            System.out.println("Produk tidak ditemukan.");
            return;
        }

        daftarProduk.remove(idx);
        System.out.println("Produk berhasil dihapus!");
    }

    static void cariDanTampilkanProduk() {
        System.out.print("Masukkan ID produk yang ingin dicari: ");
        int id = Integer.parseInt(sc.nextLine());

        int idx = cariProduk(id);
        if (idx == -1) {
            System.out.println("Produk tidak ditemukan.");
            return;
        }

        daftarProduk.get(idx).tampilkan();
    }

    public static void main(String[] args) {
        int pilihan;
        do {
            System.out.println("\n<===> SILAKAN KELOLA PRODUK TOKO ANDA <===>");
            System.out.println("1. Tambah Produk");
            System.out.println("2. Tampilkan Semua Produk");
            System.out.println("3. Update Produk");
            System.out.println("4. Hapus Produk");
            System.out.println("5. Cari Produk");
            System.out.println("0. Keluar");
            System.out.print("Pilih command: ");
            pilihan = Integer.parseInt(sc.nextLine());

            switch (pilihan) {
                case 1 -> tambahProduk();
                case 2 -> tampilkanProduk();
                case 3 -> updateProduk();
                case 4 -> hapusProduk();
                case 5 -> cariDanTampilkanProduk();
                case 0 -> System.out.println("Keluar dari program.");
                default -> System.out.println("Pilihan tidak valid!");
            }
        } while (pilihan != 0);
    }
}
