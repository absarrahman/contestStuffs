#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,c(0);
    int arr[12]{4,7,47,74,44,447,474,444,477,774,744,777};
    scanf("%d",&n);
    for(int i=0;i<12;i++){
        if((n%arr[i])==0){
            c++;
        }
    }
    if(c==0){
        printf("NO\n");
    } else {
        printf("YES\n");
    }
    return 0;
}
