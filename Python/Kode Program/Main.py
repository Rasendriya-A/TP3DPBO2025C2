from Kasir import Kasir
from Customer import Customer
from Pasta import Pasta
from NasiGoreng import NasiGoreng
from Jus import Jus

def main():
    kasir = Kasir()

    # Input data kasir
    id_kasir = input("Masukkan ID Kasir: ")
    kasir.set_id(id_kasir)

    nama_kasir = input("Masukkan Nama Kasir: ")
    kasir.set_nama(nama_kasir)

    jumlah_customer = int(input("\nMasukkan Jumlah Customer yang Dilayani: "))

    for i in range(jumlah_customer):
        customer = Customer()

        # Input data customer
        nama_customer = input("\nMasukkan Nama Customer: ")
        customer.set_nama(nama_customer)

        tanggal = input("Masukkan Tanggal Pemesanan (dd/mm/yyyy): ")
        customer.set_tanggal(tanggal)

        jumlah_item = int(input("Masukkan Jumlah Item yang Dipesan: "))

        for j in range(jumlah_item):
            print("\nPilih Jenis Item (1. Pasta, 2. Nasi Goreng, 3. Jus): ", end="")
            pilihan = int(input())

            if pilihan == 1:
                item = Pasta()
                nama_pasta = input("Masukkan Nama Pasta: ")
                item.set_nama(nama_pasta)

                jenis_pasta = input("Masukkan Jenis Pasta: ")
                item.set_pasta(jenis_pasta)

                saus = input("Masukkan Tipe Saus: ")
                item.set_saus(saus)

                harga = int(input("Masukkan Harga Pasta: "))
                item.set_harga_produk(harga)

            elif pilihan == 2:
                item = NasiGoreng()
                nama_nasgor = input("Masukkan Nama Nasi Goreng: ")
                item.set_nama(nama_nasgor)

                jenis = input("Masukkan Jenis Nasi Goreng (Ayam / Seafood): ")
                item.set_jenis(jenis)

                lvl = int(input("Masukkan Level Kepedasan (1-5): "))
                item.set_lvl_kepedasan(lvl)

                harga = int(input("Masukkan Harga Nasi Goreng: "))
                item.set_harga_produk(harga)

            elif pilihan == 3:
                item = Jus()
                nama_jus = input("Masukkan Nama Jus: ")
                item.set_nama(nama_jus)

                harga = int(input("Masukkan Harga Jus: "))
                item.set_harga_produk(harga)

                buah = input("Masukkan Jenis Buah: ")
                item.set_buah(buah)

            else:
                print("Pilihan tidak valid. Coba lagi.")
                continue

            customer.tambah_pesanan(item)

        kasir.tambah_customer(customer)

    # Menampilkan seluruh data yang telah diinputkan
    print("\n============================================")
    for cust in kasir.get_customers():
        print(f"\nCustomer: {cust.get_nama()}, Tanggal: {cust.get_tanggal()}")
        print("Pesanan:")
        for item in cust.get_pesanan():
            if isinstance(item, Pasta):
                print(f"- {item.get_nama()} (Pasta - {item.get_pasta()}, Saus: {item.get_saus()}) - Harga: {item.get_harga_produk()}")
            elif isinstance(item, NasiGoreng):
                print(f"- {item.get_nama()} (Nasi Goreng - {item.get_jenis()}, Level Kepedasan: {item.get_lvl_kepedasan()}) - Harga: {item.get_harga_produk()}")
            elif isinstance(item, Jus):
                print(f"- {item.get_nama()} (Jus Buah - {item.get_buah()}) - Harga: {item.get_harga_produk()}")

    print("============================================")

if __name__ == "__main__":
    main()
