//
// Created by absarrahman on 21-Nov-19.
//

#include <bits/stdc++.h>

#define ll long long
#define lli long long int

using namespace std;

int letterValue(string s){
    int length=s.size();
    int sum(0);
    for(int i=0;i<length;i++){
        if((s[i]==32)||(s[i]==97)||(s[i]==100)||(s[i]==103)||(s[i]==103)||(s[i]==106)||(s[i]==109)||(s[i]==112)||(s[i]==116)||(s[i]==119)){
            sum+=1;
        } else if((s[i]==98)||(s[i]==101)||(s[i]==104)||(s[i]==107)||(s[i]==110)||(s[i]==113)||(s[i]==117)||(s[i]==120)){
            sum+=2;
        }else if((s[i]==99)||(s[i]==102)||(s[i]==105)||(s[i]==108)||(s[i]==111)||(s[i]==114)||(s[i]==118)||(s[i]==121)){
            sum+=3;
        } else if((s[i]==115)||(s[i]==122)){
            sum+=4;
        }
    }
    return sum;
}

int main() {
    int testCase,c(0);
    string s,d;
    scanf("%d",&testCase);
    getline(cin,d);
    while (testCase--){
        ++c;
        getline(cin,s);
        int res=letterValue(s);
        printf("Case #%d: %d\n",c,res);
    }
    return 0;
}
