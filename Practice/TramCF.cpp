#include <bits/stdc++.h>

using namespace std;

int main(){
    int numberOfStops,a,b,maxCount(0),x(0);
    scanf("%d",&numberOfStops);
    while(numberOfStops--){
        scanf("%d %d",&a,&b);
        x=b+(x-a);
        if(x>maxCount){
            maxCount=x;
        }
    }
    printf("%d\n",maxCount);
    return 0;
}
