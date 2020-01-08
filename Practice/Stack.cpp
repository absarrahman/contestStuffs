#include <bits/stdc++.h>

using namespace std;

int main(){
    stack <int> s,temp;
    s.push(10);
    s.push(20);
    s.push(30);
    printf("%d\n",s.size());
    printf("%d\n",s.top());
    temp=s;
    while(!temp.empty()){
        printf("%d\n",temp.top());
        temp.pop();
    }
    return 0;
}
