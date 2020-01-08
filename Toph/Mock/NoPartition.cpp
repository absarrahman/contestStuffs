#include<bits/stdc++.h>
using namespace std;

int lcm(int a,int b){
    return (a*b)/__gcd(a,b);
}
int main(){
    int testCase,sizeArr,ans=1;
    scanf("%d",&testCase);
    while(testCase--){
        scanf("%d",&sizeArr);
        int arr[sizeArr];
        for(int i=0;i<sizeArr;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<sizeArr;i++){
            ans=lcm(ans,arr[i]);
        }
        printf("%d\n",ans);
    }
    return 0;
}
