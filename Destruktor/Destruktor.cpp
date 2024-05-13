#include <iostream>
using namespace std;

class Angka {
private:
	int* arr;
	int panjang;
public:
	Angka(int);
	~Angka();
	void cetakData();
	void isiData();
};

Angka::Angka(int i) {
	panjang = i;
	arr = new int[i];
	isiData();
}

Angka :: ~Angka() {
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat array sudah dilepaskan" << endl;
}
