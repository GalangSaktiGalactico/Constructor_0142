#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
	static long long int nim;
public:
	int id;
	string nama;


	void setID();
	void printAll();

	static void setNIM(int pNIM) { nim = pNIM; }
	static int getNIM() { return nim; }

	mahasiswa(string pnama) : nama(pnama) { setID(); }

};

long long int mahasiswa::nim = 20230140142;

void mahasiswa::setID()
{
	id = ++nim;
}

void mahasiswa::printAll()
{
	cout << "ID  = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main()
{
	mahasiswa mhs1("Galang Sakti");
	mahasiswa mhs2("Rafi Ramadhan");
	mahasiswa::setNIM(11);
	mahasiswa mhs3("Damar Sadewa");
	mahasiswa mhs4("Zaki Mahogra");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNIM() << endl;

	return 0;
}