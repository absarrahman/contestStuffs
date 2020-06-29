#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int x;
    cin>>x;
    if(x%4==0){
        x++;
    } else {
        x--;
    }
    cout<<x<<"\n";
    return 0;
}
