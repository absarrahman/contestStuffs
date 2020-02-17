#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    x=(x>y)?x-y:x+y;
    cout<<x<<"\n";
    return 0;
}
