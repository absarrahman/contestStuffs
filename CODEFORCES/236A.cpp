#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin>>s;
    map<char,int> m;
    for (size_t i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    
    if (m.size() % 2 == 0) {
        cout<<"CHAT WITH HER!\n";
    } else {
        cout<<"IGNORE HIM!";
    }
}

int main() {
    solve();
    return 0;
}
