#include<bits/stdc++.h>
using namespace std;

bool isPrime[101];
int prime[101];

void seive(){
    memset(isPrime,true,sizeof(isPrime));
    for(int i=2;i*i<=100;i++){
        if(isPrime[i]==true){
            for(int j=i*i;j<=100;j+=i){
                isPrime[j]=false;
            }
        }
    }
}

void seiveVal(){
    memset(prime,-1,sizeof(prime));
    for(int i=2;i*i<=100;i++){
        if(isPrime[i]){
            ++prime[i];
        }
    }
}

int main(){
    //memset(prime,-1,sizeof(prime));
    seive();
    //seiveVal();
    int x;
    while(cin>>x&&x){
        seiveVal();
        for(int i=2;i<=x;i++){
            if(isPrime[i]){
                prime[i]++;
              //  cout<<"i "<<i<<" "<<prime[i]<<"\n";
            } else {
                for(int j=2;j<=x;j++){
                    int counter=i;
                    while((counter%j==0)&&(isPrime[j])){
                        prime[j]++;
                        counter/=j;
                        cout<<"j "<<j<<" i"<<i<<" val hobe 3 ashe hoilo "<<prime[j]<<"\n";
                    }
                }
            }
        }
        cout<<x<<"! =";
        int _size = sizeof(prime)/sizeof(prime[0]);
        for(int i=0;i<_size;i++){
            if(prime[i]>0){
                cout<<" "<<prime[i]<<" ";
                //cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}


//if(i==prime[primeTrack]){
//                primeCount[primeTrack]++;
//            } else {
//                int storeX=x;
//                while(storeX%prime[primeTrack]==0){
//                    primeCount[primeTrack]++;
//                    cout<<"primeCount er value "<<primeCount[primeTrack]<<"\n";
//                    storeX/=prime[primeTrack];
//                }
//                primeTrack++;
//            }
