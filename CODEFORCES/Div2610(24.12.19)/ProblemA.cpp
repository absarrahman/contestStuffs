#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,r,testCase;
    scanf("%d",&testCase);
    while(testCase--){
        scanf("%d %d %d %d",&a,&b,&c,&r);
        int diffA=c-r;
        int diffB=c+r;
        int remA=diffA-a;
        int remB=b-diffB;
        int res=remA+remB;
        printf("%d\n",res);
    }
    return 0;
}
