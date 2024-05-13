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
