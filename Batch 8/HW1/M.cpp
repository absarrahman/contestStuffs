//
// Created by absarrahman on 21-Nov-19.
//

#include <bits/stdc++.h>

#define ll long long
#define lli long long int

using namespace std;

double increaseCal(double f){
    double c = ((f-32)*5/9)+17.7778;
    return c*1.0;
}
int main() {
    int testCase,_count(0);
    double c,f;
    scanf("%d",&testCase);
    while (testCase--){
        ++_count;
        scanf("%lf %lf",&c,&f);
        double res = c+increaseCal(f);
       // res=ceil(res*100.0)/100.0;
        printf("Case %d: %.2f\n",_count,res);
    }
    return 0;
}
