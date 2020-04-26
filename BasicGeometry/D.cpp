#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main(){
    int testCase;
    cin>>testCase;
    int c(1);
    while(testCase--){
        ll arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        sort(arr,arr+3);
        cout<<"Case "<<c++<<": ";
        if((arr[0]+arr[1])<=arr[2]){
            cout<<"Invalid"<<"\n";
        } else if((arr[0]==arr[1])&&(arr[0]==arr[2])){
            cout<<"Equilateral"<<"\n";
        } else if((arr[0]==arr[1])||(arr[0]==arr[2])||(arr[1]==arr[2])){
            cout<<"Isosceles"<<"\n";
        } else if((arr[0]!=arr[1])&&(arr[1]!=arr[2])) {
            cout<<"Scalene"<<"\n";
        }

    }
    return 0;
}
