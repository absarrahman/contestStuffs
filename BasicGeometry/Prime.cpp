#include <bits/stdc++.h>
#define ll long long
#define SIZE 10000000
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

bool isPrime(int key){
    if(find(prime.begin(),prime.end(),key)!=prime.end()){
        return true;
    }
    return false;
}

void primeArr(int arr[]){
    for(int i=0;i<103;i++){
        if(isPrime(i)){
            arr[i]=0;
        }
    }
}

bool isPerfectS(int arr[]){
   // bool flag = true;
    for(int i=0;i<103;i++){
//        if(((arr[i])>0)&&(arr[i]%2==0)){
//            flag = true;
//        } else if(arr[])
        if((arr[i]%2!=0)&&(arr[i]>0)){
            return false;
        }
    }
    return true;
}


int main(){
    primeSieve(1000);
    int testCase;
//    cout<<isPrime(100)<<" 100 ki prime?\n";
    cin>>testCase;
    //cout<<(isPrime(value)?"Yes":"Neeh");
    while(testCase--){
        int n;
        cin>>n;
        int arr[n]={0};
        int prArray[103];//no prime
        memset(prArray, -1, sizeof(prArray));
        primeArr(prArray);//initialize prime with 0
       //cout<<"Parray"<<prArray[100]<<endl;


        for(int i=0;i<n;i++){
            cin>>arr[i];//stores value
            if(isPrime(arr[i])){
              //  cout<<arr[i]<<"\n";
                prArray[arr[i]]++;
            }
        }

        cout<<(isPerfectS(prArray)?"YES\n":"NO\n");

    }
    return 0;
}
