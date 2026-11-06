#include <iostream>
using namespace std;

int main()
{
    string nama;
    float keaktifan, tugas, ujian;
    float nilai_keaktifan, nilai_tugas, nilai_ujian, nilai_akhir;

    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;


    cout << "Nama Siswa     : ";
    cin >> nama;

    cout << "Nilai Keaktifan: ";
    cin >> keaktifan;

    cout << "Nilai Tugas    : ";
    cin >> tugas;

    cout << "Nilai Ujian    : ";
    cin >> ujian;

    nilai_keaktifan = keaktifan * 20 / 100;
    nilai_tugas = tugas * 30 / 100;
    nilai_ujian = ujian * 50 / 100;
    nilai_akhir = nilai_keaktifan + nilai_tugas + nilai_ujian;
    cout << endl;

    cout << "Siswa yang bernama " << nama << endl;
    cout << "Dengan nilai persentase yang dihasilkan:" << endl;
    cout << "Nilai Keaktifan * 20% : " << nilai_keaktifan << endl;
    cout << "Nilai Tugas * 30%     : " << nilai_tugas << endl;
    cout << "Nilai Ujian * 50%     : " << nilai_ujian << endl;
    cout << endl;
    cout << "Jadi Siswa yang bernama " << nama;
    cout << " memperoleh nilai akhir sebesar " << nilai_akhir << endl;
}

