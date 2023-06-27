#include <iostream>

using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    int tahunlulus;
};

int main() {

    Mahasiswa mahasiswa[4] = {
        {"A11.2020.01234", "Andi", "Broadcasting", 2023},
        {"A11.2010.01234", "Budi", "Sistem Informasi", 2013},
        {"A11.2000.01234", "Ali", "DKV", 2003},
        {"A11.1990.01234", "Siti", "Kesehatan", 1993}
    };

    int jumlahMahasiswa = 4;
    Mahasiswa* mahasiswaa = new Mahasiswa[jumlahMahasiswa];

    mahasiswaa[0] = {"A11.2020.01234", "Andi", "Broadcasting", 2023};
    mahasiswaa[1] = {"A11.2010.01234", "Budi", "Sistem Informasi", 2013};
    mahasiswaa[2] = {"A11.2000.01234", "Ali", "DKV", 2003};
    mahasiswaa[3] = {"A11.1990.01234", "Siti", "Kesehatan", 1993};

    for (int i = 0; i < 4; i++) {
        cout << "Data Mahasiswa (Statis) " << i + 1 << ":" << endl;
        cout << "NIM            : " << mahasiswa[i].nim << endl;
        cout << "Nama           : " << mahasiswa[i].nama << endl;
        cout << "Jurusan        : " << mahasiswa[i].jurusan << endl;
        cout << "Tahun Lulus    : " << mahasiswa[i].tahunlulus << endl;
        cout << endl;
    }

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Data Mahasiswa (Dinamis) " << i + 1 << ":" << endl;
        cout << "NIM            : " << mahasiswa[i].nim << endl;
        cout << "Nama           : " << mahasiswa[i].nama << endl;
        cout << "Jurusan        : " << mahasiswa[i].jurusan << endl;
        cout << "Tahun Lulus    : " << mahasiswa[i].tahunlulus << endl;
        cout << endl;
    }

    delete[] mahasiswa;

    return 0;
}
