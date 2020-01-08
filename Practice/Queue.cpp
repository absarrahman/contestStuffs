#include <bits/stdc++.h>

using namespace std;

int main(){
    queue <int> s,temp;
    s.push(10);
    s.push(20);
    s.push(30);
    printf("%d\n",s.size());
    printf("%d\n",s.front());//prints first element
    printf("%d\n",s.back());
    temp=s;
    while(!temp.empty()){
        printf("%d\n",temp.front());
        temp.pop();
    }
    return 0;
}
