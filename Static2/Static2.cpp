#include <iostream>
using namespace std;

class mahasiswa
{
private:
	static int nim;
public:
	int id;
	string nama


	void setID();
	void printAll();

	static void setNIM(int pNIM) { nim = pNIM; }
	static int getNIM() { return nim; }



};