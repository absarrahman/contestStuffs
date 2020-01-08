#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int i,j;
    cin>>s;
    for(i=0,j=s.length()-1;i<s.length()&&j>=0;i++,j--){
        if(s[i]!=s[j]){
            break;
        }
    }
    if(i>j){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
