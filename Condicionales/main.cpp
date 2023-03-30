#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int year;
    cin>>year;

    if((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))){
        cout<<"Es bisiesto";
    }
    else{
        cout<<"No es bisiesto";
    }


    return 0;
}
