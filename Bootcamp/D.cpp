#include <bits/stdc++.h>

using namespace std;

int main(){
    int testCase,date1,date2,date3;
    scanf("%d",&testCase);
    while(testCase--){
        int rem,sum(0),x(0);
        scanf("%d %d %d",&date1,&date2,&date3);
        string s = date1+""+date2+z+date3
        stringstream ok(s);
        ok >> x;
        int temp=x;
        while(x!=0){
            rem=x%10;
            sum=(sum*10)+rem;
            x/=10;
        }
        if(temp==sum){
            printf("Palindrome\n");
        } else {
            printf("Not Palindrome\n");
        }
    }
    return 0;
}
