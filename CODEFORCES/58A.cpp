#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2="hello";
    int j(0),c(0);
    cin>>s1;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[j]){
            c++;
            j++;
        }
    }
    if(c==5){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
