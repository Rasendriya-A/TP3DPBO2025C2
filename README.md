<h1 align="center">Tugas Praktikum 3</h1>

<h3 align="left">Janji</h3>
Saya Rasendriya Andhika dengan NIM 2305309 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

<h3 align="left">Diagram</h3>
<img width="795" alt="C++1" src="https://github.com/user-attachments/assets/53df5bd2-d401-44ae-a602-30e615907c32" /> <br>


<h3 align="left">Desain Program</h3>
Program terdiri dari 4 class yaitu Kasir, Customer, Items, dan Makanan/Minuman (yang terdiri dari Pasta, Nasi Goreng, dan Jus). Class Pasta, Nasi Goreng, dan Jus adalah child dari class Items. Class Items dapat diakses oleh class Customer.<br>
Didalam class Kasir memiliki 2 Atribut, yaitu :
<ul>
   <li>Id (ID dari kasir)</li>
   <li>Nama (Nama dari kasir)</li>
</ul>
Class ini dapat mengelola beberapa Customer menggunakan array of object <br>

Didalam class Customer memiliki 2 Atribut, yaitu :
<ul>
   <li>Nama (Nama dari customer)</li>
   <li>Tanggal (Tanggal pemesanan)</li>
</ul>
Class ini dapat mengelola beberapa Items yang dipesan oleh customer menggunakan array of object.<br>

Didalam class Items memiliki 4 Atribut, yaitu :
<ul>
   <li>Id (ID dari item)</li>
   <li>Nama (Nama item)</li>
   <li>Kategori (Kategori item, seperti Makanan atau Minuman)</li>
   <li>HargaProduk (Harga dari item)</li>
</ul>
Class ini menjadi parent untuk Pasta, Nasi Goreng, dan Jus.<br>

Didalam class Pasta (Child dari Items) memiliki 2 Atribut, yaitu :
<ul>
   <li>Saus (Jenis saus yang digunakan, seperti Bolognese atau Carbonara)</li>
   <li>JenisPasta (Jenis pasta, seperti Spaghetti atau Penne)</li>
</ul>

Didalam class NasiGoreng (Child dari Items) memiliki 2 Atribut, yaitu :
<ul>
   <li>Jenis (Jenis nasi goreng, seperti Ayam atau Seafood)</li>
   <li>LvlKepedasan (Jenis nasi goreng, seperti Ayam atau Seafood)</li>
</ul>

Didalam class Jus (Child dari Items) memiliki 1 Atribut, yaitu :
<ul>
   <li>Buah (Jenis buah yang digunakan untuk jus, seperti Mangga atau Jeruk)</li>
</ul>

<h3 align="left">Alur Program</h3>
<strong> 1. Mengisi Data Kasir</strong> <br> 
Program dimulai dengan meminta input dari pengguna untuk memasukkan Id dan Nama kasir. Data ini kemudian disimpan ke dalam objek Kasir.<br>

<strong> 2. Mengisi Data Customer</strong> <br> 
Pengguna diberikan kesempatan untuk memasukkan jumlah Customer yang akan dilayani. Selanjutnya, program meminta input Nama dan Tanggal Pemesanan dari setiap customer. Data ini disimpan ke dalam objek Customer.<br>

<strong> 3. Mengisi Data Item (Pesanan Customer)</strong> <br> 
Pengguna diberikan kesempatan untuk memasukkan jumlah Items yang dipesan oleh setiap Customer.
Setiap Item dapat berupa:
<ul>
   <li> Pasta (Memiliki atribut tambahan: Saus dan Jenis Pasta)</li>
   <li> Nasi Goreng (Memiliki atribut tambahan: Jenis dan Level Kepedasan)</li>
  <li> Jus (Memiliki atribut tambahan: Jenis Buah)</li>
</ul>
Pengguna diminta memasukkan data sesuai dengan jenis Item yang dipilih. <br>

<strong> 4. Menyimpan Pesanan ke Dalam Objek Customer</strong> <br> 
Setiap Item yang telah dibuat akan disimpan ke dalam objek Customer yang bersangkutan. Program melakukan proses ini berulang kali hingga seluruh Items yang dipesan oleh customer tersebut telah disimpan. <br>

<strong> 5. Menyimpan Customer ke Dalam Objek Kasir</strong> <br> 
Setelah semua pesanan dari seorang Customer selesai dibuat, program akan menyimpan Customer tersebut ke dalam objek Kasir. Proses ini dilakukan untuk seluruh Customer yang telah diinputkan. <br>

<strong> 6. Menampilkan Data Customer dan Item yang Dipesan</strong>
<ul> 
  <li>Program mencetak semua data customer yang telah disimpan di dalam objek Kasir dalam bentuk tabel yang rapi.</li> 
  <li>Setiap customer dicetak beserta daftar **Items** yang dipesan (Nama, Kategori, Harga, serta atribut tambahan sesuai jenis item).</li>
</ul> 
<br>

<strong> 7. Mengakhiri Program</strong> <br> 
Setelah seluruh data berhasil dicetak, program mengakhiri prosesnya.

<h3 align="left">Dokumentasi</h3>
<strong> C++ </strong> <br>
<img width="795" alt="C++1" src="https://github.com/user-attachments/assets/c7ad533f-744c-4dc0-bc1f-7ec0adb2388f" /> <br>
