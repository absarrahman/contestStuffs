#include <bits/stdc++.h>
#define HIGH 110
using namespace std;

map<int,int> rArr;
map<int,int> cArr;
vector<int> rV;
vector<int> cV;

int main()
{
    int testCase;
    cin>>testCase;
    for(int c = 1; c <= testCase; c++)
    {
        int n,trace(0);
        cin>>n;
        int arr[n][n];
        int sArr[n][n];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin>>arr[i][j];
            }
        }

        for(int i = 0; i < n; i++)
        {
            trace+=arr[i][i];
        }
        // cout<<"TRACE "<<trace<<"\n";

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                rArr[arr[i][j]]++;
            }
//            int *maxV = max_element(rArr,rArr+HIGH);
//            rV.push_back(*maxV);
//            memset(rArr, 0, sizeof(rArr));
            unsigned currentMax = 0;
            //unsigned arg_max = 0;
            for(auto it = rArr.cbegin(); it != rArr.cend(); ++it )
            {


                if (it ->second > currentMax)
                {
                    //      arg_max = it->first;
                    currentMax = it->second;
                }
            }

            // cout << "Value " << arg_max << " occurs " << currentMax << " times " << endl;
            rV.push_back(currentMax);
            rArr.clear();
        }



//        for(int i=0;i<rV.size();i++){
//            cout<<"rV"<<rV[i]<<endl;
//        }

        int high_row =*max_element(rV.begin(), rV.end());
       // cout<<"High row ="<<high_row<<"\n";

        for(int j = 0; j < n; j++)
        {
            for(int i = 0; i<n; i++)
            {
                cArr[arr[i][j]]++;
            }
//            int *maxV = max_element(cArr,cArr+HIGH);
//            cV.push_back(*maxV);
//            memset(cArr, 0, sizeof(cArr));
            unsigned currentMax = 0;
            //unsigned arg_max = 0;
            for(auto it = cArr.cbegin(); it != cArr.cend(); ++it )
            {


                if (it ->second > currentMax)
                {
                    //      arg_max = it->first;
                    currentMax = it->second;
                }
            }
            cV.push_back(currentMax);
            cArr.clear();
        }
//        for(int i=0;i<cV.size();i++){
//            cout<<"cV"<<cV[i]<<endl;
//        }



        int high_col =*max_element(cV.begin(), cV.end());
        //cout<<"High col ="<<high_col<<"\n";

        rV.clear();
        cV.clear();

        if(high_row==1)
        {
            high_row=0;
        }
        if(high_col==1)
        {
            high_col=0;
        }

        cout<<"Case #"<<c<<": "<<trace<<" "<<high_row<<" "<<high_col<<endl;
//        memset(cArr, 0, sizeof(cArr));
//        memset(rArr, 0, sizeof(rArr));

    }
    return 0;
}
