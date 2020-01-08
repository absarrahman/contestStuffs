#include<bits/stdc++.h>
using namespace std;

int dCount(int a){
    if(a==1){
        return 1;
    }
    int c(0);
    int root=(int)sqrt(a);
    for(int i=1;i<=root;i++){
        if(a%i==0){
            c+=2;
        }
    }
//    if(pow(root,2)==a){
    if(root*root==a){
        c--;
    }
    return c;
}

int main(){
    int testCase,a,b,mC(0),mN(0),currentC;
    scanf("%d",&testCase);
    while (testCase--){
        scanf("%d %d",&a,&b);
        for(int i=a;i<=b;i++){
            currentC=dCount(i);
          //  cout<<currentC<<"\n";
            if(mC<currentC){
                mC=currentC;
                mN=i;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",a,b,mN,mC);

       // v.clear();
    }
    return 0;
}
