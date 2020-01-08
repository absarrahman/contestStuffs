#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,float> s;
    s["Alus"]=2000;
    s["Joy"]=6969;
    for(auto i: s){
        cout<<i.first<<","<<i.second<<endl;
    }
    return 0;
}
