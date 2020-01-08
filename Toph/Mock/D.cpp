#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCase;
    double n;
    scanf("%d",&testCase);
    while(testCase--){
        scanf("%lf",&n);
        double ans=(n-2)*180.00;
        double x=ans/n;
        printf("%.6f\n",x);
    }
    return 0;
}
