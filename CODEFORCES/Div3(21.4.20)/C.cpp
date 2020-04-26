#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll maxSum(ll arr[], ll n, ll k)
{
    // n must be greater
    if (n < k) {
        cout << "Invalid";
        return -1;
    }

    // Compute sum of first window of size k
    ll max_sum = 0;
    for (int i = 0; i < k; i++)
        max_sum += arr[i];

    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of
    // current window.
    ll window_sum = max_sum;
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, window_sum);
    }
    return max_sum;
}

int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){

    }
}
