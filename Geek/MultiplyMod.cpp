#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll mod(ll a,ll b,ll c){
    ll x = (a%c)*(b%c);
    x=x%c;
    return x;
}
int main(){
    int testCase;
    scanf("%d",&testCase);
    while(testCase--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll z=mod(a,b,c);
        cout<<z<<"\n";
    }
    return 0;
}


