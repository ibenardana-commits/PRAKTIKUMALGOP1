#include <iostream>
using namespace std;

struct mhs
{
    string nama, nim, jurusan;
    int sks, program;
};

int main()
{
    mhs bayar[2];
    int var, tetap;

    for(int i = 0; i < 2; i++)
    {
        cout << "\n=== Data Mahasiswa ke-" << i+1 << " ===\n";

        cout << "Masukkan Nama        : ";
        cin.ignore(); 
        getline(cin, bayar[i].nama);

        cout << "Masukkan NIM         : ";
        getline(cin, bayar[i].nim);

        cout << "Masukkan Jurusan     : ";
        getline(cin, bayar[i].jurusan);

        while (true)
        {
            cout << "Masukkan Program [1=D3, 2=S1] : ";
            cin >> bayar[i].program;

            if (bayar[i].program == 1 || bayar[i].program == 2)
                break;

            cout << "Program tidak valid! Coba lagi.\n";
        }

        cout << "Masukkan Jumlah SKS  : ";
        cin >> bayar[i].sks;

        if (bayar[i].program == 1)
        {
            tetap = 500000;
            var = bayar[i].sks * 25000;
        }
        else
        {
            tetap = 750000;
            var = bayar[i].sks * 50000;
        }

        cout << "\n===== OUTPUT MAHASISWA =====\n";
        cout << "Nama         : " << bayar[i].nama << endl;
        cout << "NIM          : " << bayar[i].nim << endl;
        cout << "Jurusan      : " << bayar[i].jurusan << endl;
        cout << "Program      : " << bayar[i].program << endl;
        cout << "Jumlah SKS   : " << bayar[i].sks << endl;
        cout << "SPP Tetap    : " << tetap << endl;
        cout << "SPP Variabel : " << var << endl;
        cout << "Total SPP    : " << tetap + var << endl;
        cout << "============================\n";
    }

    return 0;
}