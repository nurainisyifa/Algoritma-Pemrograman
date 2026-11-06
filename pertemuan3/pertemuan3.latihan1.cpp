#include <iostream>
#include <string>
using namespace std;

int main()
{
    char nama[20];
    string npm;
    int tugas1, tugas2, tugas3;
    float rata;
	
	cout<<"PROGRAM HITUNG NILAI RATA RATA"<<endl;

    cout << "Nama : ";
    cin >> nama;
    cout << "NPM : ";
    cin >> npm;
    cout << "Nilai Tugas 1: ";
    cin >> tugas1;
    cout << "Nilai Tugas 2: ";
    cin >> tugas2;
    cout << "Nilai Tugas 3: ";
    cin >> tugas3;

    rata = (tugas1 + tugas2 + tugas3) / 3.0;

	cout << "NPM " << npm
		<< " Siswa yang bernama " << nama << endl;
	cout << "Memperoleh Nilai Rata-rata " << rata 
    	<< " dari hasil tugas yang diikutinya" << endl;
}
