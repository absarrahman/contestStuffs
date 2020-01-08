#include <bits/stdc++.h>
#include <math.h>

using namespace std;

double pi= M_PI;

int main(){
    int testCase,number;
    double area,radius;
    double lol = tan((45*pi)/180);
    scanf("%d",&testCase); //testCase
    while(testCase--){
        scanf("%d",&number);
        radius=lol*number;
        area=pi*radius*radius;
        printf("%.6f\n",area);
    }
}
