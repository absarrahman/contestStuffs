#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,x,y;
    cin>>n>>x>>y;
    ll high = 100000000000000000000000000000000000000;
    ll low = 0;
    ll total=0;
    while(low<=high){
        ll mid = (high+low)/2;
        total=(mid/x)+(mid/y);
        if(total<n){
            low=mid+1;
        } else {
            high=mid-1;
        }
    }
    high+=1;
    cout<<high;

    return 0;

}
