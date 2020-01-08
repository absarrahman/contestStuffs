#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,c(0);
    scanf("%d",&n);
    char s[n];
    cin>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            c++;
        }
    }
    printf("%d\n",c);
}
