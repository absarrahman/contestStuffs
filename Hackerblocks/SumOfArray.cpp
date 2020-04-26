#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n;
    int arr[n];
    int num1(0),num2(0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        num1 *= 10;
        num1 += arr[i];
    }

    cin>>m;
    int arr2[m];

    for(int i=0;i<m;i++){
        cin>>arr2[i];
        num2 *= 10;
        num2 += arr2[i];
    }

    int sum = num1+num2;
    string s = to_string(sum);
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<", ";
    }
    cout<<"END"<<"\n";

    return 0;
}
