#include <bits/stdc++.h>

using namespace std;

int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        double aX,aY,bX,bY,cX,cY;
        cin>>aX>>aY>>bX>>bY>>cX>>cY;
        double s1 = sqrt((pow((aX-bX),2))+(pow((aY-bY),2)));
        double s2 = sqrt((pow((bX-cX),2))+(pow((bY-cY),2)));
        double s3 = sqrt((pow((aX-cX),2))+(pow((aY-cY),2)));
        double p = (s1+s2+s3)/2;
        double area = sqrt(p*(p-s1)*(p-s2)*(p-s3));
        printf("%.0f\n",area/7);

    }
    return 0;
}
