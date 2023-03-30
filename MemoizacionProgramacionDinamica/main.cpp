#include <bits/stdc++.h>
#include <vector>

using namespace std;

int FibRecursivo(int n);
int FibMemoizacion( int n, vector<int>&arr);
int FibDinamico(int n);
int FibOptimo(int n);

int main()
{
    int n;
    cin>>n;

    vector<int>arr(n+1, 0);//0,0,0,0,0,0, -> n+1 veces

    cout<<FibMemoizacion(n,arr)<<endl;

    for(int i : arr) cout<<i<<' ';

    return 0;
}

int FibRecursivo(int n){
    if(n < 2) return n;

    return FibRecursivo(n - 1) + FibRecursivo(n - 2);

}

int FibMemoizacion(int n, vector<int>&arr){//4
    if(arr[n] != 0) return arr[n];
    if(n < 2) return n;
    //arr[4] = 2 + 1 --> 3
    arr[n] = FibMemoizacion(n-1 , arr) + FibMemoizacion(n - 2, arr);//3
    //arr[4] = 3,arr[3] = 2 , arr[2] = 1
    return arr[n];
}

int FibDinamico(int n){
    vector<int>dinamico(n+1 , 0);

    dinamico[0] = 0;
    dinamico[1] = 1;

    for(int i = 2; i < n; i++){
        dinamico[i] = dinamico[i-1] + dinamico[i-2];
    }

    return dinamico[n];
}

int FibOptimo(int n){
    int a = 0;
    int b = 1;

    for(int i = 0; i < n; i++){
        int c = a + b;
        a = b;
        b = c;
    }

    return a;
}
