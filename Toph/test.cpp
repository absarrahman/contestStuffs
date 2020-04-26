#include <bits/stdc++.h>
#define MAX 10000
#define pb push_back
using namespace std;

map<int, int> m;
int spf[MAX];
vector < int > prime;
char stat[MAX];

void prime_sieve ( int n ) {
    int sqrtn = sqrt ( n );
    prime.pb ( 2 );
    for ( int i = 3; i <= sqrtn; i += 2 ) {
        if ( stat[i] == 0 ) {
            for ( int j = i * i; j <= n; j += 2 * i ) stat[j] = 1;
        }
    }
    for ( int i = 3; i <= n; i += 2 ) if ( stat[i] == 0 ) prime.pb ( i );
}

bool isPrime(int key){
    return (find(prime.begin(), prime.end(), key) != prime.end());
}

void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAX; i++) {
        spf[i] = i;
    }

    for (int i=4; i<MAX; i+=2) {
        spf[i] = 2;
    }

    for (int i=3; i*i<MAX; i++){

        if (spf[i] == i){

            for (int j=i*i; j<MAX; j+=i){

                if (spf[j]==j){
                    spf[j] = i;
                }
            }
        }
    }
}

void factorization(int x)
{
    while (x != 1)
    {
        m[(spf[x])]++;
        x = x / spf[x];
    }
}

int main(){
    sieve();
    prime_sieve (MAX);
    int testCase;
    cin>>testCase;
//    cout<<isPrime(v);
    while(testCase--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            int val;
            cin>>val;
            if(isPrime(val)){
                m[val]++;
            } else {
                factorization(val);
            }
        }
        int f(0); //true
        for(auto i:m){
            if((i.second)%2!=0){
                f++;
                break;
            }
        }
        if(f==0){
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
        m.clear();
    }
//    primeFactors(testCase);
    return 0;
}

