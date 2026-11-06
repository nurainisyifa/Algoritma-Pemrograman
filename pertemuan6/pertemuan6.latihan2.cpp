
#include <iostream>
using namespace std;

int main()
{
    int hari;

    cout << "PROGRAM JADWAL KULIAH" << endl;
    cout << "=====================" << endl;

    cout << "Masukkan nomor hari (1-7): ";
    cin >> hari;

    if (hari >= 1 && hari <= 7)
    {
        if (hari == 1)
        {
            cout << "Senin: Masuk kuliah";
        }
        else if (hari == 2)
        {
            cout << "Selasa: Tidak masuk kuliah";
        }
        else if (hari == 3)
        {
            cout << "Rabu: Masuk kuliah";
        }
        else if (hari == 4)
        {
            cout << "Kamis: Masuk kuliah";
        }
        else if (hari == 5)
        {
            cout << "Jumat: Tidak masuk kuliah";
        }
        else
        {
            cout << "Libur";
        }
    }
    else
    {
        cout << "Nomor hari tidak valid!";
    }

    return 0;
}

