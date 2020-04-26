#include <bits/stdc++.h>
using namespace  std;

int main()
{
    string s;
    cin>>s;
    map<string,int>m;
 //   vector<string> v;

    for(int i=0;i<s.size();i++){
        string a ="";
        a+= s[i];
       // v.push_back(a);
       // cout<<a<<" a"<<endl;
        m[a]++;
    }
    //cout<<m["a"]<<endl;
    int prod=1;
  //  cout<<m["a"]<<endl;
  //  cout<<m["b"]<<endl;
    map<string, int>::iterator itr;

    for (itr = m.begin(); itr != m.end(); ++itr) {
        prod*= itr->second;
    }

    cout<<prod<<endl;

    return 0;
}
