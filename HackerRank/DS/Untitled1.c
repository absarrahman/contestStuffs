#include<bits/stdc++.h>
#define ll long long

#define lli long long int

using namespace std;

lli mod(lli b,lli p,lli m){
    //best cases
    if(p==0){
        return 1;
    }
    if(p%2!=0){
        lli a = mod(b,p-1,m);
        lli b = b%m;
        return (a*b)%m;

    } else {
        lli v=mod(b,p/2,m);
        return (v*v)%m;
    }
}

int main(){
    lli b,p,m;
  //  int testCase;
    while(cin>>b>>p>>m){
        lli result=mod(b,p,m);
        cout<<result<<"\n";

    }

    return 0;
}
