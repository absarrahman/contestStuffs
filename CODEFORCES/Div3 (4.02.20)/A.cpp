#include <bits/stdc++.h>
#define ll long long
#define SIZE 10000000
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase;
    cin>>testCase;
    while(testCase--){
        int testSize;
        cin>>testSize;
        ll arr[testSize];
        ll sum(0);
        for(int i = 0;i<testSize;i++){
            ll x;
            cin>>x;
            sum+=x;
        }
        if(sum%2!=0){
            cout<<"YES"<<"\n";
        } else {
            cout<<"NO"<<"\n";
        }

    }
    return 0;
}
