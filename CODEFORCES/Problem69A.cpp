#include <bits/stdc++.h>

using namespace std;

int main(){
    int testCase,x(0),y(0),z(0),x1,y1,z1;
    scanf("%d",&testCase);
    while(testCase--){
        scanf("%d %d %d",&x1,&y1,&z1);
        x+=x1;
        y+=y1;
        z+=z1;
    }
    if((x==0)&&(y==0)&&(z==0)){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
