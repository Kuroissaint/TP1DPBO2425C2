=============================JANJI============================

Saya nama Nafis Asyakir Anjar dengan Nim 2407915 mengerjakan tugas praktikum 1 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak akan melakukan kecurangan seperti yang telah di spesifikasikan Aamiin.


=============================DESAIN===========================

Saya membuat kelas produk elektronik sesuai dengan tema tugas yang diberikan yaitu toko elektronik. Kelas ini memiliki 6 atribut yang menurut saya penting untuk dimiliki yaitu:
1. Kode             (Untuk memastikan setiap produk unik)
2. nama_produk      (setiap produk pasti memiliki atribut nama)
3. merek            (setiap produk pasti berasal dari merek tertentu)
4. watt             (produk elektronik pasti menggunakan watt)
5. harga            (sebuah produk yang dijual pasti memiliki harga)
6. deskripsi        (deskripsi produk adalah wajib)


============================FLOW CODE==========================

============GENERAL=============

Secara umum, kode program ini dalam setiap bahasa memiliki struktur yang mirip. Yakni terdiri dari 2 file, satu untuk class dan satu untuk main.

File class berisi deklarasi kelas beserta atributnya dan method untuk "menampilkan" produk yang sudah terdata. Selain itu di file ini juga terdapat constructor, getter, dan setter.
File main (Index.php untuk php) berisi metode penyimpanan data, fungsi untuk searching, dan menu CRUD

Setiap bahasa juga memiliki karakteristik khusus masing-masing 
==============CPP===============
- Menyimpan data produk menggunakan vector
- Implementasi CRUD menggunakan pengkondisian while dan switch-case

![dokumentasicpp](./Dokumentasi/cpp.jpg)

Gambar dokumentasi menunjukan bahwa program berhasil dijalankan

==============JAVA==============
- Data produk disimpan menggunakan ArrayList
- Implementasi CRUD menggunakan Scanner dan pengkondisian while

![dokumentasicpp](./Dokumentasi/java.jpg)

Gambar dokumentasi menunjukan bahwa program berhasil dijalankan

=============PYTHON=============
- Data objek produk disimpan dalam List
- Implementasi CRUD hanya menggunakan pengkondisian While

![dokumentasicpp](./Dokumentasi/python.jpg)

Gambar dokumentasi menunjukan bahwa program berhasil dijalankan

==============PHP===============
- Penyimpanan data objek produk menggunakan session_start untuk kemudian disimpan di $_SESSION['produk']
- Input data produk menggunakan form
- Produk terdata ditampilkan dalam tabel HTML
- Implementasi CRUD dilakukan berdasarkan $_POST['aksi'] (action button)
- Menambahkan sedikit styling menggunakan css agar tampilan terlihat lebih rapi
  
![dokumentasicpp](./Dokumentasi/php.jpg)
Gambar dokumentasi menunjukan bahwa program berhasil dijalankan
