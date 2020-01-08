#include<bits/stdc++.h>
//{{{}}}  {{}{}{}}
//{{}}{}
using namespace std;

int main(){
    int oB(0),cB(0),ob1;
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]=='{'){
            ++oB;
        } else if(s[i]=='}'){
            ++cB;
        }
    }
    int z=x/2;
    z=z-1;
    printf("%d\n",z);
    return 0;
}
