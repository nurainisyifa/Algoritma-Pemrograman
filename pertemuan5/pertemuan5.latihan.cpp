#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaSiswa;
    float nilai1, nilai2, nilai3;
    float rataRata;
    string hadiah;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl << endl;
    cout << "Nama Siswa : ";
	cin >> namaSiswa;
    
    cout << "Nilai Pertandingan I : ";
    cin >> nilai1;

    cout << "Nilai Pertandingan II : ";
    cin >> nilai2;
    cout << "Nilai Pertandingan III : ";
    cin >> nilai3;
    rataRata = (nilai1 + nilai2 + nilai3) / 3;

    if (rataRata >= 85) {
        hadiah = "Seperangkat Mobil";
    } else if (rataRata >= 70) {
        hadiah = "Seperangkat Uang sebesar Rp. 500,000";
    } else {
        hadiah = "Hiburan";
    }

    cout << endl << "Layar Keluaran" << endl << endl;
    cout << "Siswa yang bernama " << namaSiswa << endl;
    cout << "Memperoleh nilai rata-rata " << rataRata << " dari hasil" << endl;
    cout << "perlombaan yang diikutinya." << endl;
    cout << "Hadiah yang didapat adalah " << hadiah << endl;

    return 0;
}

