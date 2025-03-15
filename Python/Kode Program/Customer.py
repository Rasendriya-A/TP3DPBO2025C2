from Items import Items

class Customer:
    def __init__(self, Nama="", Tanggal=""):
        self.__Nama = Nama
        self.__Tanggal = Tanggal
        self.__pesanan = []

    def tambah_pesanan(self, item):
        if isinstance(item, Items):
            self.__pesanan.append(item)
        else:
            print("Pesanan harus berupa objek dari kelas Items atau turunannya.")

    def set_nama(self, nama):
        self.__Nama = nama

    def get_nama(self):
        return self.__Nama

    def set_tanggal(self, tanggal):
        self.__Tanggal = tanggal

    def get_tanggal(self):
        return self.__Tanggal

    def get_pesanan(self):
        return self.__pesanan
