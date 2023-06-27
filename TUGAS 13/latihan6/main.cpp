#include <iostream>
using namespace std;

enum MyEnum {Semi = 0, Panas = 1, Gugur = 2, Dingin = 3, Hujan = 4};

int main(){
    int musim = 1;
    cout << "Saat ini musim : ";
    switch (musim) {
        case 0:
            cout << "Semi";
            break;
        case 1:
            cout << "Panas";
            break;
        case 2:
            cout << "Gugur";
            break;
        case 3:
            cout << "Dingin";
            break;
        case 4:
            cout << "Hujan";
            break;
    }
    cout << endl;
    return 0;
}
