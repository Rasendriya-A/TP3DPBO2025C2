from Items import Items

class NasiGoreng(Items):
    def __init__(self, Id="", Nama="", Kategori="", HargaProduk=0, Jenis="", Lvl_Kepedasan=0):
        super().__init__(Id, Nama, Kategori, HargaProduk)
        self.__Jenis = Jenis
        self.__Lvl_Kepedasan = Lvl_Kepedasan

    def set_jenis(self, jenis):
        self.__Jenis = jenis

    def get_jenis(self):
        return self.__Jenis

    def set_lvl_kepedasan(self, lvl):
        self.__Lvl_Kepedasan = lvl

    def get_lvl_kepedasan(self):
        return self.__Lvl_Kepedasan
