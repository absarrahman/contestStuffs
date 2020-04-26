#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,val;
    cin>>a>>b;
    for(int i=1;;i++){
        val=b*i;
        if(val>a){

       // cout<<val;
            break;
        }

    }
    cout<<val-a;

    return 0;
}
