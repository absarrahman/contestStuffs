#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,c(0);
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    int x=s.length();
    if(x%2!=0){
        printf("IGNORE HIM!\n");
    } else {
        printf("CHAT WITH HER!\n");
    }
    return 0;
}
