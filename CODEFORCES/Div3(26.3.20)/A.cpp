#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mulmod(ll a, ll b, ll mod)
{
    ll res = 0;
    a = a % mod;
    while (b > 0)
    {

        if (b % 2 == 1)
            res = (res + a) % mod;

        // Multiply 'a' with 2
        a = (a * 2) % mod;


        b /= 2;
    }


    return res % mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        ll a,b,c;
        cin>>a>>b;
        c=a%b;
        if(c!=0){
            c=b-c;
        }
        cout<<c<<"\n";
    }

    return 0;
}
