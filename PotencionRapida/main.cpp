#include <bits/stdc++.h>

using namespace std;
//ALGORITMO DE POTENCIACION RAPIDA
typedef long long int ll;//Asignamos un alias para invocar a este tipo de dato cuando sea necesario

ll exp(ll, ll);
ll expMod(ll,ll,int);

int main(){
    int a, n, m;

    cin>>a>>n>>m;
    cout<<exp(a,n)<<'\n';
    cout<<expMod(a,n,m);

    return 0;
}

ll exp(ll a, ll n){//2,8 ---2,4 =16
    if(n == 0) return 1;
    if(n == 1) return a;
    if(n % 2 == 0){
        ll resultado = exp(a, n>>=1);//usamos el desplazamiento de bits hacia la izquierda que divide en 2
        return resultado * resultado;
    }
    else{
        return exp(a, n-1) * a;
    }
}

ll expMod(ll a, ll n, int m){
    if(n == 0) return 1;
    if(n == 1) return a % m;
    if(n % 2 == 0){
        ll resultado = exp(a, n/2);
        return ((resultado % m) * (resultado % m)) % m;
    }
    else{
        return ((exp(a, n-1) % m) * (a % m)) % m;
    }
}
