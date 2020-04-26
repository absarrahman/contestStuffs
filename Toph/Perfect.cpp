#include <bits/stdc++.h>
#define SIZE 10000
#define pb push_back
#define ll unsigned long long int
using namespace std;


vector<int>prime;
char primeVal[SIZE];

//sieveGenerator

void primeSieve(int n) {
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


