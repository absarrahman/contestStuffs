#include<bits/stdc++.h>
#define ll long long
using namespace std;

//ll arr[99999999];
//ll fib(ll n)
//{
//    if(arr[n] == -1)
//    {
//        if(n <= 1)
//        {
//            arr[n] = n;
//        }
//        else
//        {
//            arr[n] = fib(n-1) + fib(n-2);
//        }
//    }
//    return arr[n];
//}
//ll mod(ll p,ll n,ll m)
//{
//    if(p == 0){
//        return 1;
//    }
//    ll q = mod(p/2,n,m);
//    if(p % 2 == 0){
//        return (q*q) %m;
//    }
//    else{
//        return (((q*n)%m)*q)%m;
//    }
//}

ll fib(ll n,ll m){
    if(n<2){
        return n;
    }
    ll temp;
    ll prev=0;
    ll current=1;
    for(int i=0;i<n-1;i++){
        temp=prev;
        prev=current;
        current=(temp+current)%m;
    }
    return current;
}



int main()
{
//    for(int i=0; i<200000000000; i++)
//    {
//        arr[i] = -1;;
//    }
    ll n;
    cin>>n;
    ll x=fib(n,1000000007);
    cout<<x<<"\n";
    return 0;
}
