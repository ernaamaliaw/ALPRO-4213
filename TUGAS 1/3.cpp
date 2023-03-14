#include <iostream>

using namespace std;

int hitungTotal (int arr[], int n){
    int total = 0;
    for (int i =0; i < n; i++){
        total += arr[i];
    }
    return total;
}

int main (){
    int n;
    cout << "Jumlah angka yang akan dimasukkan ke dalam array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cout << "Masukkan angka : ";
        cin >> arr[i];
    }

    int total = hitungTotal(arr, n);
    cout << "Jumlah total nilai dari array : " << total << endl;

    return 0;
}
