#include <bits/stdc++.h>
using namespace  std;

int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--){
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        int c(0);
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s3[i]&&s2[i]!=s3[i]){
                c++;
                break;
            }
        }
        if(c){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
