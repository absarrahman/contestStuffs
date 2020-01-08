#include <bits/stdc++.h>

using namespace std;

int main(){
    int testCase,a,b,sum,c(0);
    scanf("%d",&testCase);
    while(testCase--){
        c++;
        scanf("%d %d",&a,&b);
        sum=a+b;
        printf("Case %d: %d\n",c,sum);
    }
}
