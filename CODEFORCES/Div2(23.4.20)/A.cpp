#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        int val;
        int arr[4];
        int f1[2];// a+b and c - d
        int f2[2];// a-b and c+d
        cin>>val;
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        f1[0] = arr[0]+arr[1];
        f1[1] = arr[2]-arr[3];
        f2[0] = arr[0]-arr[1];
        f2[1] = arr[2]+arr[3];
        if(((f1[1]/f1[0])==val)||((f2[1]/f2[0])==val)){
            cout<<"YES"<<"\n";
        } else {
            cout<<"NO"<<"\n";
        }

    }
    return 0;
}
