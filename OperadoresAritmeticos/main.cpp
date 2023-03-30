#include <bits/stdc++.h>
//PROBLEMA: Introducir dos numeros enteros y devolver su residuo
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, res;

    cin>>a>>b;

    res = a - ((a/b) * b);

    cout<<res;

    return 0;
}
