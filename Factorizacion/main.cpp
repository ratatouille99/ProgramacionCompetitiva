#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n = 2, t, z;

    cin>>t;

    while(t--){
        cin>>z;

        if(z == 1 || z == 0){
            cout<<"No se puede factorizar";
            continue;
        }

        else if(z < 0) abs(z);

        while(z != 1){
            while(z % n == 0){
                cout<<z<<" | "<<n<<endl;
                z /= n;
            }
            n++;
        }

        cout<<endl;
    }


    return 0;
}
