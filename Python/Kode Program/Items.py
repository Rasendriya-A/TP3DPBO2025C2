class Items:
    def __init__(self, Id="", Nama="", Kategori="", HargaProduk=0):
        self.__Id = Id
        self.__Nama = Nama
        self.__Kategori = Kategori
        self.__HargaProduk = HargaProduk

    # Setter dan Getter ID
    def set_id(self, id1):
        self.__Id = id1

    def get_id(self):
        return self.__Id

    # Setter dan Getter Nama
    def set_nama(self, nama1):
        self.__Nama = nama1

    def get_nama(self):
        return self.__Nama

    # Setter dan Getter Kategori
    def set_kategori(self, kategori1):
        self.__Kategori = kategori1

    def get_kategori(self):
        return self.__Kategori

    # Setter dan Getter HargaProduk
    def set_harga_produk(self, harga):
        self.__HargaProduk = harga

    def get_harga_produk(self):
        return self.__HargaProduk
