#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, p, q, mcd, mcm;

    cin>>a>>b;

    p = a;
    q = b;

    if(a < 0 || b < 0){
        a = abs(a);
        b = abs(b);
    }

    while(a % b != 0){
        a %= b;
        swap(a,b);
    }

    mcd = b;
    mcm = (p*q)/mcd;

    cout<<"El minimo comun divisor de ("<<a<<","<<b<<") : "<<mcd<<endl;
    cout<<"El maximo comun divisor de ("<<a<<","<<b<<") : "<<mcm;


    return 0;
}
