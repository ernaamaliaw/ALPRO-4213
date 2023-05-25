#include <iostream>

using namespace std;

int penjumlahan1 (int a, int b);
int penjumlahan2 (int a, int b);
int penjumlahan3 (int a, int b);
int pengurangan (int a, int b);
int perkalian (int a, int b);
int pembagian (int a, int b);
int pangkat (int a, int b);

int penjumlahan1 (int a, int b){
    if (b == 0)
        return a;
    else
        return 1 + penjumlahan1 (a, b - 1);
}

int penjumlahan2 (int a, int b){
    if (a == 0)
        return b;
    else
        return 1 + penjumlahan2 (a - 1, b);
}

int penjumlahan3 (int a, int b){
    if (a <= 0 && b <= 0)
        return 0;
    else if (a > 0)
        return 1 + penjumlahan3 (a - 1, b);
    else if (b > 0)
        return 1 + penjumlahan3 (a, b - 1);
}

int pengurangan (int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return pengurangan (a - 1, b - 1);
    }
}

int perkalian (int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    } else {
        return a + perkalian (a, b - 1);
    }
}

int pembagian (int a, int b) {
    if (a < b) {
        return 0;
    } else {
        return 1 + pembagian (a - b, b);
    }
}

int pangkat (int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * pangkat (a, b - 1);
    }
}


int main()
{
    cout << penjumlahan1 (5,7) << endl;
    cout << penjumlahan2 (5,7) << endl;
    cout << penjumlahan3 (5,7) << endl;
    cout << pengurangan (10,6) << endl;
    cout << perkalian (5,8) << endl;
    cout << pembagian (15,3) << endl;
    cout << pangkat (3,4) << endl;
    return 0;
}
