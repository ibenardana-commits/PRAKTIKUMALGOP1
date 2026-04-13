#include <iostream>
using namespace std;

struct kendaraan
{
    string plat;
    string jenis;
    string nama;
    string alamat;
    string kota;
};

int main()
{
    kendaraan k;

    cout << "Masukkan Plat Nomor Kendaraan : ";
    getline(cin, k.plat);

    cout << "Masukkan Jenis Kendaraan      : ";
    getline(cin, k.jenis);

    cout << "Masukkan Nama Pemilik         : ";
    getline(cin, k.nama);

    cout << "Masukkan Alamat               : ";
    getline(cin, k.alamat);

    cout << "Masukkan Kota                 : ";
    getline(cin, k.kota);

    cout << "\n===== DATA KENDARAAN =====\n";
    cout << "a. Plat Nomor Kendaraan : " << k.plat << endl;
    cout << "b. Jenis Kendaraan      : " << k.jenis << endl;
    cout << "c. Nama Pemilik         : " << k.nama << endl;
    cout << "d. Alamat               : " << k.alamat << endl;
    cout << "e. Kota                 : " << k.kota << endl;

    return 0;
}