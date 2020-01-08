#include <bits/stdc++.h>
#define ll long long
#define SIZE 10000000
using namespace std;



//for PRIME NUMBERS only 1 function ie primeSieve
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



//for Large Factorials. Required Functions(nDigit(int x,int digitSize,int resultF[]),fact(n))
//number of digit

int nDigit(int x,int digitSize,int resultF[]){
    int carry=0;
    for(int i=0;i<digitSize;i++){
        int product=(resultF[i]*x)+carry;
        resultF[i]=product%10;
        carry=product/10;
    }
    while(carry){
        resultF[digitSize]=carry%10;
        carry/=10;
        digitSize++;
    }
    return digitSize;
}

void fact(int n){
    int resultF[500]={0};
    int digitSize=resultF[0]=1;
    for(int i=2;i<=n;i++){
        digitSize=nDigit(i,digitSize,resultF);
    }
    for(int i=digitSize-1;i>=0;i--){
        printf("%d",resultF[i]);
    }
    printf("\n");
}
