#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,sum(0),children,out(0);
    scanf("%d",&n);
    while(n--){
        scanf("%d",&children);
        sum+=children;
    }
    if(sum%4==0){
        out=sum/4;
    } else {
        out=(sum/4)+1;
    }
    printf("%d\n",out);
    return 0;

}
