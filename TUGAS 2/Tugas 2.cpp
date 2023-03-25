#include <iostream>
using namespace std;

bool isEven(int x){
    if (x % 2 == 0)
        return true;
    else
        return false;
}

bool isOdd(int x){
    if (x % 2 !=0)
        return true;
    else
        return false;
}

bool isFactor(int x, int f){
    return x % f == 0;
}

int maxArray(int arr[], int n){
    int result;
    for (int i = 0; i < n; i++){
        if (result < arr[i]){
            result = arr[i];
        }
    }
    return result;
}

int minArray(int arr[], int n){
    int result = arr[0];
    for (int i = 1; i < n; i++){
        if (result > arr[i]){
            result = arr[i];
        }
    }
    return result;
}

int mmax(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}

int mmin(int a, int b){
    if (a < b)
        return a;
    else
        return b;
}

int sumEven(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            sum += arr[i];
        }
    }
    return sum;
}

int sumOdd(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            sum += arr[i];
        }
    }
    return sum;
}

void sswap(int a, int b){
    int temp;
    temp = b;
    b = a;
    a = temp;
    cout << "Nilai a : " << a << " dan " << "Nilai b : " << b << endl;
}

bool isFound(int a[], int x, int n){
    for (int i = 0; i < n; i++){
        if (a[i] == x){
            return true;
        }
    }
    return false;
}

int main (){
    int n;
    //isEven
    cout << "(Genap) Masukkan angka : ";
    cin >> n;
    string even = (isEven(n) == 1)? " termasuk angka Genap" : " tidak termasuk angka Genap";
    cout << n << even << endl;

    //isOdd
    cout << "(Ganjil) Masukkan angka : ";
    cin >> n;
    string odd = (isOdd(n) == 1)? " termasuk angka Ganjil" : " tidak termasuk angka Ganjil";
    cout << n << odd << endl;

    int x, f;
    //isFactor
    cout << "Masukkan nilai x : ";
    cin >> x;
    cout << "Masukkan nilai f : ";
    cin >> f;
    string faktor = (isFactor(x,f) == 1)? " Faktor" : " Tidak Faktor";
    cout << x << " dan " << f << " termasuk" << faktor << endl;

    int a, b;
    //mmax mmin
    cout << "Masukkan nilai a : ";
    cin >> a;
    cout << "Masukkan nilai b : ";
    cin >> b;
    cout << "Nilai terbesar diantara nilai tersebut adalah : " << mmax(a,b) << endl;
    cout << "Nilai terkecil diantara nilai tersebut adalah : " << mmin(a,b) << endl;

    //sumEven Odd
    cout << "Masukkan jumlah array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cout << "Masukkan array : ";
        cin >> arr[i];
    }
    int maxArr = maxArray(arr, n);
    int minArr = minArray(arr, n);
    int sumGenap = sumEven(arr, n);
    int sumGanjil = sumOdd(arr, n);
    cout << "Nilai terbesar dari arr[] : " << maxArr << endl;
    cout << "Nilai terkecil dari arr[] : " << minArr << endl;
    cout << "Jumlah nilai Genap : " << sumGenap << endl;
    cout << "Jumlah nilai Ganjil : " << sumGanjil << endl;

    //sswap
    cout << "Masukkan nilai a : ";
    cin >> a;
    cout << "Masukkan nilai b : ";
    cin >> b;
    sswap(a, b);

    //isFound
    cout << "Masukkan jumlah array : ";
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++){
        cout << "Masukkan angka : ";
        cin >> ar[i];
    }
    cout << "Masukkan angka yang dicari : ";
    cin >> x;
    string cari = (isFound(ar, x, n) == 1)? "Angka ditemukan" : "Angka tidak ditemukan";
    cout << cari << endl;

    return 0;
}
