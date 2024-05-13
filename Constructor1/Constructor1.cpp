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


