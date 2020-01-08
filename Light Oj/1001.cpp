#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase,b,out(0);
    scanf("%d",&testCase);
    while(testCase--)
    {
        int c(0);
        scanf("%d",&b);
        out=b/2;
        c=b%2+b/2;
        printf("%d %d\n",out,c);

    }
}
