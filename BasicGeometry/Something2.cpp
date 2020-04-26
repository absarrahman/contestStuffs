#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin>>n&&n){
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int diffArr[n]={0}; //1 true 0 false
        int flag(0);
        for(int i=0;i<n-1;i++){
            int diff = abs((arr[i]-arr[i+1]));
            diffArr[diff]=1;
        }
        for(int i=1;i<n;i++){
            if(diffArr[i]!=1){
                flag++;
                break;
            }
        }

        if(flag==0){
            cout<<"Jolly"<<endl;
        } else {
            cout<<"Not jolly"<<endl;
        }
    }
    return 0;
}
