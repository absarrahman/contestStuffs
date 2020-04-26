#include<bits/stdc++.h>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        int n,m;
        cin>>n>>m;
        int res=(m*2)-(m-3);
        if(n==res){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;

}
