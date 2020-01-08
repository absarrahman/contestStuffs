#include <bits/stdc++.h>
#define ll long long
#define SIZE 10000000
using namespace std;

vector<int>prime;
char primeVal[SIZE];

void primeSieve (int n) {
    int sqrtN=sqrt(n);
    prime.push_back ( 2 );
    for ( int i = 3; i <= sqrtN; i += 2 ) {
        if (primeVal[i] == 0 ) {
            for (int j=i*i;j<=n;j+=2*i)
                primeVal[j]=1;
        }
    }
    for (int i=3;i<=n;i+=2 )
        if(primeVal[i]==0)
            prime.push_back(i);
}

int main(){
    primeSieve(SIZE);
    int testCase;
   // cout<<primes.size();
    cin>>testCase;

    while(testCase--){
        int input;
        cin>>input;
        cout<<prime[input-1]<<"\n";
    }
    return 0;
}
