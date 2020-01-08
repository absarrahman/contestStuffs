#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,z,i,j;
    scanf("%d %d %d",&x,&y,&z);
    string s1=to_string(x);
    string s2=to_string(y);
    string s3=to_string(z);
    string s=s1+""+s2+""+s3;
    cout<<x<<" "<<y<<" "<<s<<endl;
    for(i=0,j=s.length()-1;i<s.length()&&j>=0;i++,j--){
        if(s[i]!=s[j]){
            break;
        }
    }
    if(i>j){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
