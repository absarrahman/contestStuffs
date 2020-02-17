#include<bits/stdc++.h>

using namespace std;

const int MAX = 1000;

int f[MAX];

int fib(int n)
{
    // Base cases
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);

    if (f[n])
        return f[n];

    int k = (n & 1)? (n+1)/2 : n/2;

    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
           : (2*fib(k-1) + fib(k))*fib(k);

    return f[n];
}

int main(){
    int a;
    cin>>a;
    int sum(0);
    for(int i=1;i<=a;i++){
        sum+=fib(i);
    }
    cout<<sum<<"\n";
    return 0;
}
