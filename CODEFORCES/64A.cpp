#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

unsigned ll fact(ll n)
{
    if(n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}

int main()
{
    ll n;
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%lld",&n);
        unsigned ll result=fact(n);
        printf("%ulld \n",result);
    }
    return 0;
}
