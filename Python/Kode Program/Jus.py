from Items import Items

class Jus(Items):
    def __init__(self, Id="", Nama="", Kategori="", HargaProduk=0, Buah=""):
        super().__init__(Id, Nama, Kategori, HargaProduk)
        self.__Buah = Buah

    def set_buah(self, buah1):
        self.__Buah = buah1

    def get_buah(self):
        return self.__Buah
