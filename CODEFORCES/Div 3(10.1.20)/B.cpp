#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll maxSum(ll arr[],ll n,ll k)// n is size and k is number of values for sum
{
    if (n < k) {
        return -1;
    }
    ll max_sum = 0;
    for (int i = 0; i < k; i++){
        max_sum+=arr[i];
    }

    ll window_sum = max_sum;
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, window_sum);
    }
    return max_sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    cin>>testCase;
    while(testCase--){
        ll number;
        cin>>number;
        ll arr[number];
        for(int i=0;i<number;i++){
            cin>>arr[i];
        }
        sort(arr,arr+number);

        ll yaser=maxSum(arr,number,number);
        ll adel=maxSum(arr,number,2);
        if(yaser>adel){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
