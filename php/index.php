<?php
session_start();
include "ProdukElektronik.php";

if (!isset($_SESSION['produk'])) {
    $_SESSION['produk'] = [];
    $_SESSION['nextId'] = 1;
}

if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $id = $_SESSION['nextId']++;
    $nama = $_POST['nama'];
    $desk = $_POST['deskripsi'];
    $watt = $_POST['watt'];
    $harga = $_POST['harga'];
    $model = $_POST['model'];
    $merek = $_POST['merek'];

    $gambarPath = "";
    if (!empty($_FILES['gambar']['name'])) {
        $uploadDir = "uploads/";
        if (!is_dir($uploadDir)) {
            mkdir($uploadDir);
        }
        $gambarPath = $uploadDir . basename($_FILES['gambar']['name']);
        move_uploaded_file($_FILES['gambar']['tmp_name'], $gambarPath);
    }

    $produk = new ProdukElektronik($id, $nama, $desk, $watt, $harga, $model, $merek, $gambarPath);
    $_SESSION['produk'][] = serialize($produk);

    header("Location: index.php");
    exit;
}

if (isset($_GET['action']) && $_GET['action'] === 'delete') {
    $id = $_GET['id'];
    foreach ($_SESSION['produk'] as $key => $p) {
        $obj = unserialize($p);
        if ($obj->getId() == $id) {
            unset($_SESSION['produk'][$key]);
            break;
        }
    }
    header("Location: index.php");
    exit;
}
?>

<!DOCTYPE html>
<html>
<head>
    <title>Produk Electroduct</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1>Daftar Produk Elektronik</h1>

    <form method="POST" enctype="multipart/form-data">
        <label>Nama Produk:</label><br>
        <input type="text" name="nama" required><br><br>

        <label>Deskripsi:</label><br>
        <input type="text" name="deskripsi" required><br><br>

        <label>Watt:</label><br>
        <input type="number" name="watt" required><br><br>

        <label>Harga:</label><br>
        <input type="number" step="0.01" name="harga" required><br><br>

        <label>Model:</label><br>
        <input type="text" name="model" required><br><br>

        <label>Merek:</label><br>
        <input type="text" name="merek" required><br><br>

        <label>Gambar:</label><br>
        <input type="file" name="gambar" accept="image/*"><br><br>

        <button type="submit">Tambah Produk</button>
    </form>

    <h2>Data Produk</h2>
    <table border="1" cellpadding="8" cellspacing="0">
        <tr>
            <th>ID</th>
            <th>Nama Produk</th>
            <th>Deskripsi</th>
            <th>Watt</th>
            <th>Harga</th>
            <th>Model</th>
            <th>Merek</th>
            <th>Gambar</th>
            <th>Aksi</th>
        </tr>
        <?php
        foreach ($_SESSION['produk'] as $p) {
            $obj = unserialize($p);
            $obj->tampilkanBaris(0);
        }
        ?>
    </table>
</body>
</html>
