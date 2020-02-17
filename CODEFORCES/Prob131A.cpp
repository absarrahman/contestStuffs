#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int lC(0),uC(0);
    cin>>s;
    for (int i = 1; i < s.size(); ++i)
    {
        //s[i]=tolower(s[i]);
        if((s[i]>='A')&&(s[i]<='Z'))
        {
            lC++;
        }
    }
    //cout<<lC<<endl;
    if(lC==(s.size()-1))
    {

        for (int i = 0; i < s.size(); ++i)
        {
            if((s[i]>='a')&&(s[i]<='z'))
            {
                s[i]=toupper(s[i]);
                //cout<<s[i]<<endl;
            } else if((s[i]>='A')&&(s[i]<='Z')){
                s[i]=tolower(s[i]);
            }

        }
    }
    cout<<s<<"\n";
    return 0;
}
