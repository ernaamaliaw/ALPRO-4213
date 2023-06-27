#include <iostream>

using namespace std;

struct Sepeda {
    string Merk;
    string Type;
    int Tahun;
    string Harga;
};

int main() {
    Sepeda sepeda1;

    Sepeda* pointerSepeda = &sepeda1;

    pointerSepeda->Merk = "Polygon";
    pointerSepeda->Type = "Sepeda Gunung";
    pointerSepeda->Tahun = 2013;
    pointerSepeda->Harga = "2.000.000";

    cout << "Merk   : " << pointerSepeda->Merk << endl;
    cout << "Type   : " << pointerSepeda->Type << endl;
    cout << "Tahun  : " << pointerSepeda->Tahun << endl;
    cout << "Harga  : " << pointerSepeda->Harga << endl;

    return 0;
}
