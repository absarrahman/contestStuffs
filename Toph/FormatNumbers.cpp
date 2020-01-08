#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,pos;
    string val;
    scanf("%d",&x);
    val=to_string(x);
    pos=val.length()-3;
    while(pos>0){
        val.insert(pos,",");
        pos=pos-3;
    }
    cout<<val<<"\n";
    return 0;
}
