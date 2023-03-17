#include <iostream>
using namespace std;
int jumlah (int a , int b)
{
    return a+b;
}
int kurang (int x, int y){
    return x-y;
}
int arr [5] = {1,3,4,5};

int sumArr(int arr[]);

float average(int arr[]);

int ukuran = sizeof(arr)/sizeof(arr[0]);

int main (){
    cout << jumlah(3,5) << endl;
    cout << kurang (6,1) << endl;
    cout << sumArr(arr) << endl;
    cout << average(arr) << endl;
}

int sumArr(int arr[]){
    int c = 0;
    for (int d=0;d<5; d++){
        c+= arr[d];
    }
    return c;
}

float average(int arr[]){

    return sumArr(arr)/ukuran;
}
