<?php
class ProdukElektronik {
    private $id;
    private $nama_produk;
    private $deskripsi;
    private $watt;
    private $harga;
    private $model;
    private $merek;
    private $gambar; // path file lokal

    public function __construct($id, $nama_produk, $deskripsi, $watt, $harga, $model, $merek, $gambar) {
        $this->id = $id;
        $this->nama_produk = $nama_produk;
        $this->deskripsi = $deskripsi;
        $this->watt = $watt;
        $this->harga = $harga;
        $this->model = $model;
        $this->merek = $merek;
        $this->gambar = $gambar;
    }

    public function getId() {
        return $this->id;
    }

    public function tampilkanBaris($index) {
        echo "<tr>";
        echo "<td>" . $this->id . "</td>";
        echo "<td>" . htmlspecialchars($this->nama_produk) . "</td>";
        echo "<td>" . htmlspecialchars($this->deskripsi) . "</td>";
        echo "<td>" . $this->watt . " W</td>";
        echo "<td>Rp " . number_format((float)$this->harga, 0, ',', '.') . "</td>";
        echo "<td>" . htmlspecialchars($this->model) . "</td>";
        echo "<td>" . htmlspecialchars($this->merek) . "</td>";
        echo "<td><img src='" . htmlspecialchars($this->gambar) . "' width='80'></td>";
        echo "<td>
                <a href='?action=edit&id=$this->id'>Edit</a> | 
                <a href='?action=delete&id=$this->id' onclick=\"return confirm('Yakin hapus?');\">Hapus</a>
              </td>";
        echo "</tr>";
    }
}
?>
