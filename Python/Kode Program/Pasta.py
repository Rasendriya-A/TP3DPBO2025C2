from Items import Items

class Pasta(Items):
    def __init__(self, Id="", Nama="", Kategori="", HargaProduk=0, Saus="", JenisPasta=""):
        super().__init__(Id, Nama, Kategori, HargaProduk)
        self.__Saus = Saus
        self.__JenisPasta = JenisPasta

    def set_saus(self, saus1):
        self.__Saus = saus1

    def get_saus(self):
        return self.__Saus

    def set_pasta(self, pasta1):
        self.__JenisPasta = pasta1

    def get_pasta(self):
        return self.__JenisPasta
