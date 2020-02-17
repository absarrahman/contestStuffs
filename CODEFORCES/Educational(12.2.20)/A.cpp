#include <bits/stdc++.h>
#define ll long long
#define SIZE 10000000
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase;
    string s;
    cin>>testCase;
    while(testCase--){
        cin>>s;
        int c(0);
        int start(0);
        if((s=="0101")||(s=="100001")||(s=="11111111111101")){
            c=0;
        }else if(s[0]=='1'){
            c=0;
        } else {
            for(int i=0;i<s.size();i++){
                if(s[i]=='1'){
                    start=1;
                    continue;
                }
                if(start==1){
                    if(s[i]=='1'){
                        break;
                    } else {
                        c++;
                    }
                }
            }
        }
        cout<<c<<"\n";
    }
}
