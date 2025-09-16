public class ProdukElektronik {
    private int id;
    private String namaProduk;
    private String deskripsi;
    private int watt;
    private double harga;
    private String model;
    private String merek;

    public ProdukElektronik(int id, String namaProduk, String deskripsi,
                            int watt, double harga, String model, String merek) {
        this.id = id;
        this.namaProduk = namaProduk;
        this.deskripsi = deskripsi;
        this.watt = watt;
        this.harga = harga;
        this.model = model;
        this.merek = merek;
    }

    public int getId() {
        return id;
    }

    public void tampilkan() {
        System.out.println("ID Produk   : " + id);
        System.out.println("Nama Produk : " + namaProduk);
        System.out.println("Deskripsi   : " + deskripsi);
        System.out.println("Watt        : " + watt + " W");
        System.out.println("Harga       : Rp " + harga);
        System.out.println("Model       : " + model);
        System.out.println("Merek       : " + merek);
        System.out.println("-------------------------------");
    }
}
