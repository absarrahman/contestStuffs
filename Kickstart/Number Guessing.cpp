#include <iostream>
#include <string.h>
using namespace std;

void solve(int a,int b){
    int mid = (a+b)/2;
    cout<<mid<<"\n";
    string s;
    cin>>s;
    if(s=="CORRECT"){
        return;
    } else if(s=="TOO_SMALL"){
        solve(mid+1,b);
    } else {
        solve(a,mid-1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase;
    cin >> testCase;
    for(int i=1;i<=testCase;i++)
    {
        int a,b;
        cin >>a>>b;
        int tries;
        cin >> tries;
        solve(a+1,b);

    }
    return 0;
}
