#include <bits/stdc++.h>

using namespace std;

int main(){
    int k,n,w,sum(0),borrow(0);
    scanf("%d %d %d",&k,&n,&w);
    for(int i=1;i<=w;i++){
        sum+=i*k;
    }
    borrow=sum-n;
    if(borrow>0){
        printf("%d\n",borrow);
    } else {
        printf("0\n");
    }
    return 0;
}
