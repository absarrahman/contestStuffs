#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    string s;
    cin>>t;
    int c(0);
    while(t--){
      cin>>s;
      for(int i = 0;i<s.size();i++){
        c++;
      }
      cout<<c;
    }
    return 0;
}