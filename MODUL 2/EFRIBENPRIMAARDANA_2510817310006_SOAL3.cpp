#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define n 10
using namespace std;

void INSERT();
void DELETE();
void CETAKLAYAR();
void Inisialisasi();
void RESET();

int PIL, F, R;
char PILIHAN[10], HURUF;
char Q[n];

void Inisialisasi() {
    F = -1;
    R = -1;
}

int penuh() {
    return (R == n - 1);
}

int kosong() {
    return (F == -1 || F > R);
}

void INSERT() {
    if (penuh()) {
        cout << "Queue Penuh!\n";
    } else {
        cout << "Masukkan data (huruf): ";
        cin >> HURUF;
        if (kosong()) {
            F = 0;
        }
        R++;
        Q[R] = HURUF;
        cout << "Data masuk ke queue\n";
    }
}

void DELETE() {
    if (kosong()) {
        cout << "Queue Kosong!\n";
    } else {
        cout << "Data yang dihapus: " << Q[F] << endl;
        F++;
    }
}

void CETAKLAYAR() {
    if (kosong()) {
        cout << "Queue Kosong!\n";
    } else {
        cout << "Isi Queue: ";
        for (int i = F; i <= R; i++) {
            cout << Q[i] << " ";
        }
        cout << endl;
    }
}

void RESET() {
    F = -1;
    R = -1;
    cout << "Queue dikosongkan\n";
}

int main() {
    Inisialisasi();
    do {
        cout << "QUEUE\n";
        cout << "=================\n";
        cout << "1. INSERT\n";
        cout << "2. DELETE\n";
        cout << "3. CETAK QUEUE\n";
        cout << "4. QUIT\n";
        cout << "PILIHAN : ";
        cin >> PILIHAN;

        PIL = atoi(PILIHAN);

        switch (PIL) {
        case 1:
            INSERT();
            break;
        case 2:
            DELETE();
            break;
        case 3:
            CETAKLAYAR();
            break;
        default:
            cout << "TERIMA KASIH\n";
            break;
        }

        cout << "Press any key to continue...\n";
        getch();
        system("cls");

    } while (PIL != 4);

    return 0;
}