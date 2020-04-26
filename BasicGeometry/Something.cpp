#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,m;
    while(cin>>a>>b){
        if((a==-1)&&(b==-1)){
            break;
        } else {
            m = abs(a-b);
            if(m>50){
                cout<<100-m<<endl;
            } else {
                cout<<m<<endl;
            }
        }
    }
    return 0;
}
