#include <bits/stdc++.h>
using namespace  std;

int main()
{
    int testCase,n,d;
    cin>>testCase;
    while(testCase--)
    {
        cin>>n>>d;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(n==1)
            cout<<arr[0]<<endl;
        else
        {
            for(int i=0; i<d; i++)
            {
                for(int j=0; j<i-1; j++)
                {
                    if(arr[i]==0)
                    {
                        break;
                    }
                    else
                    {
                        arr[i]=arr[i]-1;
                        arr[j]=arr[j]+1;
                    }
                }
            }
            cout<<arr[0]<<endl;
        }
    }
    return 0;
}
