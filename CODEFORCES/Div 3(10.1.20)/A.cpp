#include<bits/stdc++.h>
#define ll long long
using namespace std;

//int maxSum(int arr[],int n,int k)// n is size and k is number of values for sum
//{
//    if (n < k) {
//        return -1;
//    }
//    int max_sum = 0;
//    for (int i = 0; i < k; i++){
//        max_sum+=arr[i];
//    }
//
//    int window_sum = max_sum;
//    for (int i = k; i < n; i++) {
//        window_sum += arr[i] - arr[i - k];
//        max_sum = max(max_sum, window_sum);
//    }
//    return max_sum;
//}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    string s;
    cin>>x;
    cin>>s;
    cout<<s.size()+1<<endl;
    return 0;
}
