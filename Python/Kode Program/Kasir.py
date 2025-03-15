from Customer import Customer

class Kasir:
    def __init__(self, Id="", Nama=""):
        self.__Id = Id
        self.__Nama = Nama
        self.__customers = []

    def tambah_customer(self, customer):
        if isinstance(customer, Customer):
            self.__customers.append(customer)
        else:
            print("Hanya dapat menambahkan objek dari kelas Customer.")

    def set_id(self, id1):
        self.__Id = id1

    def get_id(self):
        return self.__Id

    def set_nama(self, nama1):
        self.__Nama = nama1

    def get_nama(self):
        return self.__Nama

    def get_customers(self):
        return self.__customers
