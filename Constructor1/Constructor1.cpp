#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
	int nim;
	string nama;

public:
	Mahasiswa()
	{
		nim = 0;
		nama = "Galang Sakti";
	};
	Mahasiswa(int iNIM) {nim = iNIM;}
	Mahasiswa(string iNama) {nama = iNama;}
	Mahasiswa(int iNIM, string iNama) { nim = iNIM; nama = iNama; }

	void cetak() {
		cout << endl << " NIM = " << endl;
		cout << " Nama = " << endl;
	}
};

int main() 
{
	Mahasiswa mhs1;
	Mahasiswa mhs2(20);
	Mahasiswa mhs3("Galang Sakti");
	Mahasiswa mhs4(20, "Jihadut Tholibin");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();

	return 0;
}
