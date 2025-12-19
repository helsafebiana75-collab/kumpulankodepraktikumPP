#include <iostream>
using namespace std;

int main() {

    // Array 1 dimensi & mengakses elemen array menggunakan indeks
    int tanggal[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    cout << "Tanggal: " << tanggal[0] << endl;

    string hari[] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    cout << "Hari : " << hari[4] << endl;

    // Array karakter (char) / string
    char namaDepan[] = {'K', 'a', 't', 's'};
    cout << "Nama panggilan (char) : " << namaDepan << endl;

    string nama = "Kats Pemakulu Dunia";
    cout << "Nama lengkap (string) : " << nama << endl << endl;

    // Perulangan while loop untuk menampilkan semua elemen array
    int i = 0;
    while (i < 7) {
        cout << "Hari ke-" << (i + 1) << " : " << hari[i] << endl;
        i++;
    }

    cout << endl;

    // Menghitung panjang array (jumlah elemen)
    int panjang = sizeof(hari) / sizeof(hari[0]);
    cout << "Panjang array hari adalah : " << panjang << endl;
    cout << "Kats Pemakulu Dunia dalam " << panjang << " hari." << endl << endl;

    // Menghitung total dan rata-rata penjualan
    int jumlahHari;
    cout << "Masukkan jumlah hari penjualan: ";
    cin >> jumlahHari;

    int penjualan[jumlahHari];
    int totalPenjualan = 0;
    float rataRata;

    cout << "Masukkan penjualan berapa porsi Chicken Katsu selama "
         << jumlahHari << " hari: " << endl;

    for (int j = 0; j < jumlahHari; j++) {
        cout << "Penjualan hari " << hari[j] << " : ";
        cin >> penjualan[j];
        totalPenjualan += penjualan[j];
    }

    rataRata = (float)totalPenjualan / jumlahHari;

    cout << "Total porsi Chicken Katsu yang telah terjual : "
         << totalPenjualan << " porsi." << endl;
    cout << "Rata-rata penjualan Chicken Katsu selama "
         << jumlahHari << " hari adalah "
         << rataRata << " porsi." << endl << endl;

    // Array 2 dimensi
    int matriks[100][100];
    int jumlahBaris, jumlahKolom;

    cout << "Masukkan jumlah bulan dan tanggal buka kedai Chicken Katsu : " << endl;
    cout << "Input jumlah bulan (baris matriks) : ";
    cin >> jumlahBaris;
    cout << "Input jumlah tanggal (kolom matriks) : ";
    cin >> jumlahKolom;

    // Input elemen matriks
    for (int x = 0; x < jumlahBaris; x++) {
        for (int y = 0; y < jumlahKolom; y++) {
            cout << "Baris " << x + 1 << ", Kolom " << y + 1 << " : ";
            cin >> matriks[x][y];
        }
    }

    cout << endl;
    cout << "Kedai Chicken Katsu buka selama "
         << jumlahBaris << " bulan di tanggal tertentu." << endl;

    // Output matriks
    for (int x = 0; x < jumlahBaris; x++) {
        for (int y = 0; y < jumlahKolom; y++) {
            cout << matriks[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}