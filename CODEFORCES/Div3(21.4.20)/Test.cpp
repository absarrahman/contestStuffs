#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        ll value;
        cin>>value;
        ll sum(1);
        for(int i=1;i<=value;i++){
            sum+=pow(2,i);
            if(value%sum==0){
                //cout<<"Output for "<<value<<" is "<<value/sum<<"\n";
                cout<<value/sum<<"\n";
                break;
            }
        }
    }
}
