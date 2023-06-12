#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; // variabel untuk menyimpan input dari lingkaran maupun bujur sangkar
public:
	bidangDatar() { // constructor
		x = 0;

	}
	virtual void input() {} // fungsi yang menerima input dan mengrim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0;} // fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0;} // fungsi untuk menghitung keliling
	void setX(int a) { // fungsi untuk memberi / mengirim nilai pada x
		this->x = a;
	}
	int getX() { // fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran : public bidangDatar {
public:
    void input() {
        int p;
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> p;
        setX(p);
    }
    float Luas() {
        int p = getX();
        return 3.14 * p * p;
    }
    float Keliling() {
        int p = getX();
        return 2 * 3.14 * p;
    }
};

class Bujursangkar :public bidangDatar {
public :
    void input() {
        int s;
        cout << "Masukkan sisi: ";
        cin >> s;
        setX(s);
    }
    float Luas() {
        int s = getX();
        return s * s;
    }

    float Keliling() {
        int s = getX();
        return 4; s;
    }
};

int main() {
    Lingkaran lingkaran;
    lingkaran.input();
    cout << "Luas Lingkaran: " << lingkaran.Luas() << endl;
    cout << "Keliling Lingkaran: " << lingkaran.Keliling() << endl;
    cout << "----------------------------" << endl;
    Bujursangkar bujursangkar;
    bujursangkar.input();
    cout << "Luas Bujursangkar: " << bujursangkar.Luas() << endl;
    cout << "Keliling Bujursangkar: " << bujursangkar.Keliling() << endl;

    return 0;
    
}








// catatan ekasu