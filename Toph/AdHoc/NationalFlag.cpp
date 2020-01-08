/*
Conditions
1) You need to maintain 10:6 ratio
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,x1,y1;
    scanf("%d %d",&x,&y);
    if((x==y)||(y>x)){
        printf("Not possible\n");
    } else {
        int diff=x-y;
        for(int i=1;i<=diff-1;i++){
            x1=(5*i);
            y1=((2*i)+i);
        }
        if((x1>x)||((x-x1)!=(y-y1))){
            printf("Not possible\n");
        } else {
            printf("%d %d\n",x1,y1);
        }
    }
    return 0;
}
