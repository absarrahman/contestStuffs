#include<bits/stdc++.h>
#include <clocale>
#define ll long long

using namespace std;

int main()
{

    int testCase,l(0);
    scanf("%d",&testCase);
    while(testCase--)
    {
        l++;
        double avg(0),sum(0),val;
        for(int i=1;i<=12;++i){
            scanf("%lf",&val);
            sum+=val;
        }
        sum=sum/12.0;
        ll avgL=sum;
        double y=sum-avgL;
      //  printf("%lld ",avgL/1000);
        printf("%d $",l);

        ll r=avgL%1000; //mod er result add korte hobe
        avgL=avgL/1000;//comma er porer value pabo

        if(avgL>0){
            printf("%ld,",avgL);
        }
        printf("%.2f\n",r+y);

    }

    return 0;
}
