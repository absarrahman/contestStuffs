#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> b;
    int testCase;
    string colour, maxColour;

    while (cin >> testCase&&testCase) { //if n is 0 then it will automatically terminate
        b.clear(); //clears all the value in map
        while (testCase--) {
            cin >> colour;
            b[colour]++;
        }
        int maxValue = 0;
        for(auto it: b){
            if(it.second > maxValue){
                maxValue = it.second;
                maxColour = it.first;
            }
        }
        cout << maxColour <<endl;

    }
    return 0;
}

