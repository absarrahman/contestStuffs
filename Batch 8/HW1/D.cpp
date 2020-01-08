#include<bits/stdc++.h>
#define ll long long

#define lli long long int

using namespace std;

//int pow(int x,int y){
//    if(y==0){
//        return 1;
//    }
//    if(y%2==0){
//        return pow(x,y/2)*pow(x,y/2);
//    } else {
//        return x*pow(x,y/2)*pow(x,y/2);
//    }
//}
//
//int mod(int b,int p,int m){
//    //best cases
//    if(p==0){
//        return 1;
//    }
//    if(p%2==0){
//        int a=p/2;
//        int r=b%m;
//        return (pow(r,a)*pow(r,a))%m;
//    } else {
//        int a=p/2;
//        int b=p-a;
//        int r=b%m;
//        return (pow(r,a)*pow(r,b))%m;
//    }
//}

int mod(int b, int p,int m){
    if(p==0){
        return 1;
    }
    if(p%2==0){
        int a = p/2;
        int res=mod(b,a,m);
        return ((res%m)*(res%m))%m;
    } else {
        int a = p-1;
        int c=mod(b,a,m)%m;
        return ((b%m)*c)%m;
    }

}

int main(){
    int b,p,m;
  //  int testCase;
    while(cin>>b>>p>>m){
        cout<<mod(b,p,m)<<"\n";

    }
    return 0;
}
