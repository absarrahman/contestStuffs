#include <bits/stdc++.h>

using namespace std;

int main(){
    int sum1(0),sum2(0);
    int um[7]={0};
    int zu[7]={0};
    for(int i=0;i<7;i++){
        scanf("%d",&um[i]);
    }
    for(int i=0;i<7;i++){
        scanf("%d",&zu[i]);
    }
    for(int i=0;i<7;i++){
        sum1+=um[i];
    }
    for(int i=0;i<7;i++){
        sum2+=zu[i];
    }
    if(sum1>sum2){
        printf("umair wins the buffet\n");
    } else {
        printf("zuaina wins the buffet\n");
    }
    return 0;
}
