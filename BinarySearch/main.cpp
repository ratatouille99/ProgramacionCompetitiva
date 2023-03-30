#include <iostream>

using namespace std;

void quicksort(int *arr, int izq, int der);
int binarySearch(int *arr, int low, int high, int n);

int main()
{
    int array[10] = {0,10,12,19,6,8,94,14,17,20};

    quicksort(array, 0, 9);

    for(int i = 0; i < 10; i++) cout<<array[i]<<' ';

    int n;
    cin>>n;

    int resultado = binarySearch(array, 0,9, n);

    cout<<resultado;

    return 0;
}

void quicksort(int *arr, int izq, int der){
    int i = izq, j = der, temp;
    int p = arr[(izq + der)/2];

    while(i <= j){
        while(arr[i] < p) i++;
        while(arr[j] > p) j--;

        if(i <= j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if(izq < j) quicksort(arr, izq, j);
    if(i < der) quicksort(arr, i, der);
}

int binarySearch(int *arr, int low, int high, int n){
    int i = low, j = high;
    int p;

    while(i <= j){
        p = (i + j) /2;

        if(arr[p] == n) return p;

        if(arr[p] > n) j = p - 1;
        else i = p + 1;
    }

    return -1;
}
