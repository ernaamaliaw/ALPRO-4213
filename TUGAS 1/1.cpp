#include <iostream>

using namespace std;

int tambah (int a, int b){
    return a + b;
}

int main (){
    int bil1, bil2;

    cout << "Masukkan bilangan ke 1 : ";
    cin >> bil1;
    cout << "Masukkan bilangan ke 2 : ";
    cin >> bil2;

    int hasil = tambah(bil1, bil2);

    cout << "Hasil Penjumlahan : " << hasil << endl;

    return 0;
}
