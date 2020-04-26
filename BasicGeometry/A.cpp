#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCase,c(1);
    cin>>testCase;
    while(testCase--){
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        sort(arr,arr+3);
        cout<<"Case "<<c++<<": ";
        if((pow(arr[0],2))+(pow(arr[1],2))==(pow(arr[2],2))){
            cout<<"yes\n";
        } else {
            cout<<"no\n";
        }
    }
    return 0;
}
