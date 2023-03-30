#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t , m , n;
    long long int res = 0;

    cin>>t;

    while(t != 0){
        cin>>m>>n;

        if(m <= n){
            for(int i = m; i <= n; i++){
            res += pow(2,i);
            }
            cout<<res<<endl;
            t--;
            res = 0;
        }
        else break;
    }

    return 0;
}
