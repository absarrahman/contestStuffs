#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,y,c(0);
    scanf("%d %d",&x,&y);
    if(y%x==0){
        printf("0\n");
    } else {
        while(y%x!=0){
            ++c;
            ++y;
        }
    }
    printf("%d\n",c);
    return 0;
}
