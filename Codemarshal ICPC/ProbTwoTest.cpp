#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int,pair<int,string>> ok;
    int marks,id,testCase;
    string name;
    scanf("%d",testCase);

    while (testCase--) {
        scanf("%d",&id);
        cin>>name;
        scanf("%d",&marks);
        make_pair(id,make_pair(marks,name));
    }
    vector<int,pair<int,string>> ::iterator i;
    for(i= ok.begin(); i!= ok.end(); i++){
        printf("%d",i -> second.first);
    }
    return 0;
}

