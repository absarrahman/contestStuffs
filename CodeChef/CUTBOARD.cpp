#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        x=(x-1)*(y-1);
        cout<<x<<"\n";
    }
    return 0;
}
