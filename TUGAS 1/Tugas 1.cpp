#include <iostream>

using namespace std;

int tambah (int a, int b){
    return a + b;
}

int kurang (int a, int b){
    return a - b;
}

int hitungTotal (int arr[], int n){
    int total = 0;
    for (int i =0; i < n; i++){
        total += arr[i];
    }
    return total;
}

float hitungRata (int arr[], int n){
    int total = hitungTotal (arr, n);
    float rata = (float)total / n;
    return rata;
}


int main (){
    int bil1, bil2;

    cout << "Masukkan bilangan ke 1 : ";
    cin >> bil1;
    cout << "Masukkan bilangan ke 2 : ";
    cin >> bil2;

    int hasil_penjumlahan = tambah(bil1, bil2);
    int hasil_pengurangan = kurang(bil1, bil2);

    int n;
    cout << "Jumlah angka yang akan dimasukkan ke dalam array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cout << "Masukkan angka : ";
        cin >> arr[i];
    }

    int total = hitungTotal(arr, n);
    float rata = hitungRata(arr, n);

    cout << "Hasil Penjumlahan : " << hasil_penjumlahan << endl;
    cout << "Hasil Pengurangan : " << hasil_pengurangan << endl;
    cout << "Jumlah total nilai dari array : " << total << endl;
    cout << "Rata-rata nilai dari array : " << rata << endl;

    return 0;
}
