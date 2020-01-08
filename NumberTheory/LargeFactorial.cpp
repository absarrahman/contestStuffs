#include<bits/stdc++.h>
using namespace std;

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

int main(){
    //fact(5);
    int testCase;
    scanf("%d",&testCase);
    while(testCase--){
        int x;
        scanf("%d",&x);
        fact(x);
    }
    return 0;
}

