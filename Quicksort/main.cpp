#include <iostream>

using namespace std;

void quicksort(int* arr, int izq, int der);

int main()
{
    int arreglo[10] = {1,3,5,17,24,-25,89,100,3,17};

    for(int i = 0; i < 10; i++){
        cout<<arreglo[i]<<' ';
    }

    quicksort(arreglo,0,9);

    cout<<endl<<"Arreglo ordenado con quicksort: "<<endl;

    for(int i = 0; i < 10; i++){
        cout<<arreglo[i]<<' ';
    }

    return 0;
}

void quicksort(int* arr, int izq, int der){
    int i = izq, j = der, temp;
    int p = arr[(izq + der)/2];//toma un numero del arreglo como valor :: exactamente el q esta en la posicion media del mismo

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
