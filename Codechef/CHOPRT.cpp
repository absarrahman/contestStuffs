#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t,x,y;
    cin>>t;
    while(t--){
      cin>>x>>y;
      string s;
      s=(x>y)?">":(x<y)?"<":"=";
      cout<<s<<"\n";
    }
    return 0;
}