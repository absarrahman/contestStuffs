#include <bits/stdc++.h>
using  namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase,val,sum(0);
    cin>>testCase;
    int arr[testCase];
    cout.precision(10);


    for(int i=0;i<testCase;i++){
        cin>>val;
        sum+=val;
        arr[i]=sum;
    }
    for(int i=0;i<testCase;i++){
        double answer=((double)arr[i]/(i+1));
      //  printf("%.10f\n",answer);
        int x= arr[i]/(i+1);
        if((double)x==answer){
            cout<<answer<<endl;
        } else {
            cout<<fixed<<answer<<endl;
        }
    }
    return 0;
}
