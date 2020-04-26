#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        {
            cout<<"YES\n";
        }
        else
        {
            int evenS(0),oddS(0);
            for(int i=0; i<n; i++)
            {
                if(arr[i]%2==0)
                {
                    evenS++;
                }
                else
                {
                    oddS++;
                }
            }
            if((oddS==0)||(evenS==0))
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
