#include <bits/stdc++.h>
#define ll long long

using namespace std;


double arr[1000000];


int main()
{
    int testCase,c(0);
    for (int i=1; i<=1000000; i++)
    {
        arr[i]=log(i)+arr[i-1];
    }
    scanf("%d",&testCase);
    while (testCase--)
    {
        c++;
        int n,n1;
        ll sum(0);
        scanf("%d %d",&n,&n1);
        sum=(arr[n]/log(n1))+1;
        printf("Case %d: %lld\n",c,sum);

    }
    return 0;
}
