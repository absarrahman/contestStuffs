#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        ll value;
        cin>>value;
        if((value/2)%2!=0){
           // cout<<x<<"\n";
            cout<<"NO"<<"\n";
        } else {
            cout<<"YES"<<"\n";
            ll arr[value]={0};
            for(int i=0;i<(value/2);i++){
                arr[i]=2+(2*i);
            }
            int c(0);
            for(int i=(value/2);i<value-1;i++){
                arr[i]=2+(2*(c++))-1;
            }
            ll val=(value/2)-1;
           // cout<<"val "<<val<<endl;
            arr[value-1] = value+val;
            for(ll i:arr){
                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
}
