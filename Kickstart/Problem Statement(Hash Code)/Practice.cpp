#include <bits/stdc++.h>
using namespace  std;

int main(){
    int m,n;
    cin>>m>>n; //maxslice and types of slice
    int arr[n];
    int b[n]={0};

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x(0);
    int counter(0);

    for(int i=n-1;i>=0;i--){
        x=m-arr[i];
        if(x<0){
            continue;
        } else {
            m=m-arr[i];
            b[i]=1;
            counter++;
        }
    }

    cout<<counter<<endl;

    for(int i=0;i<n;i++){
        if(b[i]==1){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}
