#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a==b)&&(b==c)&&(c==a)){
        printf("Equilateral Triangle\n");
    } else if((a==b)||(b==c)||(c==a)){
        printf("Isosceles Triangle\n");
    } else {
        printf("Bad Triangle\n");
    }
    return 0;
}
