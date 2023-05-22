#include <iostream>
using namespace std;

bool isOdd(int number) {
    return number % 2 != 0;
}

void findSmallestEven(int arr[], int size) {
    int smallestEven = -1;  // Inisialisasi dengan nilai default
    int smallestEvenIndex = -1;  // Inisialisasi dengan nilai default

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {  // Mengecek apakah bilangan genap
            if (smallestEven == -1 || arr[i] < smallestEven) {
                smallestEven = arr[i];
                smallestEvenIndex = i;
            }
        }
    }

    if (smallestEven != -1) {
        cout << "Nilai genap terkecil: " << smallestEven << endl;
        cout << "Indeks: " << smallestEvenIndex << endl;
    } else {
        cout << "Tidak ada bilangan genap dalam deret." << endl;
    }
}

int main() {
    int size;
    cout << "Masukkan jumlah elemen dalam deret: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Masukkan elemen-elemen deret: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    findSmallestEven(arr, size);



    return 0;
}
