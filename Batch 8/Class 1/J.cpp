//jodi a<b
//x=gcd(t,a)
//y=lcm(t,b)
// else x=gcd(t,b) y=lcm(t,a)

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        ll x,y;
        scanf("%lld %lld",&x,&y);
        if(y%x!=0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld %lld\n",x,y);
        }
    }

    return 0;
}
