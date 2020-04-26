#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int flag(0);

    for(int i=0;i<s.size();i++){
        if((s[i]!='7')||(s[i]!='4')){
            flag ++;
        }

    }

   // cout << flag << '\n';

    if(flag==4||flag==7){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}
