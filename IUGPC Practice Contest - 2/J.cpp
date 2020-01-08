#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int testCase;
    string colour,maxColour;
    map<string,int> mColour;
    while(cin>>testCase&&testCase){
        mColour.clear();
        for(int i=1;i<=testCase;i++){
            cin>>colour;
            mColour[colour]++;
        }
        int maxVal(0);
        for(auto j:mColour){
           if(j.second>maxVal){
               maxColour=j.first;
               maxVal=j.second;
           }
        }
        cout<<maxColour<<"\n";
    }
    return 0;

}
