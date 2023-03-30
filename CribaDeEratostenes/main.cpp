#include <bits/stdc++.h>

bool primos[100];

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin>>n;

    primos[0] = primos[1] = false;

    for(int i = 2; i < 100; i++) primos[i] = true;

    for(int i = 2; i < 100; i++){
        if(primos[i] && i*i <= n){
            for(int j = i*i; j <= n; j+=i) primos[j] = false;
        }
    }

    for(int i = 0; i <= n; i++){
        if(primos[i]) cout<<i<<", ";
    }

    return 0;
}
