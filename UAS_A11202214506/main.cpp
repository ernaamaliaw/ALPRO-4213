/*
Nama    : Erna Amalia Widhiyanti
NIM     : A11.2022.14506
Kelas   : A11.4213
*/

#include <iostream>

using namespace std;

struct mahasiswa
{
    string nama, nim;
    int score[5];

    void printData()
    {
        cout << "NIM    : " << nim << endl;
        cout << "Nama   : " << nama << endl;
        cout << "Nilai  : ";
            for (int i = 0; i < 5; i++) {
                cout << score[i] << " ";
            }
        cout << endl;
    }

    void swapScore(int* score1, int* score2)
    {
        int temp = *score1;
        *score1 = *score2;
        *score2 = temp;
    }

    int sumScore(int* score, int n)
    {
        if (n == 0)
            return 0;
        return score[n-1] + sumScore(score, n-1);
    }

    void selectionSort (int* score, int n){
        if (n <= 1){
            return;
        }
        int minIndex = 0;
        for (int i = 1; i < n; i++){
            if (score[i] < score[minIndex]){
                minIndex = i;
            }
        }
        if (minIndex != 0){
            swapScore (&score[0], &score[minIndex]);
        }
        selectionSort (score + 1, n - 1);
    }
};


int main()
{
    cout << "Program Data Mahasiswa" << endl;

    // Declare m1
    mahasiswa m1 = {"Erna Amalia Widhiyanti", "A11.2022.14506", {92, 94, 97, 91, 95}};
    cout << "\n Before Swap" << endl;
    m1.printData();

    // After swap first and last element
    cout << "\n After Swap" << endl;
    m1.swapScore(&m1.score[0], &m1.score[4]);
    m1.printData();

    // Average
    int n = sizeof(m1.score) / sizeof(m1.score[0]);
    cout << "\n Nilai Rata-Rata : " << m1.sumScore(m1.score, n) / n << endl;;

    //Sorting
    m1.selectionSort(m1.score, 5);
    cout << "\n Nilai Setelah di Sorting : ";
    for (int i = 0; i < 5; i++){
        cout << m1.score[i] << " ";
    }
    cout << endl;

    return 0;
}
