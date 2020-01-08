#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int testCase;
    int n;
    scanf("%d",&testCase);
    while(testCase--){
        scanf("%d",&n);
        ll sum(0);
        for(int i=1;i*2<=n;i++){
            if(n%i==0){
                sum+=i;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
