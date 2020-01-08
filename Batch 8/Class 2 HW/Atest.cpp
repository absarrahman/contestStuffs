#include<bits/stdc++.h>
using namespace std;


int prime[]= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

int main()
{
    //memset(prime,-1,sizeof(prime));
    //seive();
    //seiveVal();
    int x;
    int pSize=25;
    while(cin>>x&&x)
    {
        int primeCount[25]={0};
        for(int start=2; start<=x; start++)
        {
            for(int i=0; i<pSize; i++)
            {
                int st=start;
                while(st%prime[i]==0)
                {
                    primeCount[i]++;
                    st/=prime[i];
                   // cout<<i <<" is "<< primeCount[i]<<"\n";
                }
            }
        }
       // cout<<x<<"! =";
        printf("%3d! =",x);
        int counterVal=1;
        for(int i=0; i<pSize; i++)
        {
            if(primeCount[i]>0)
            {
                //cout<<" "<<primeCount[i];
                if(counterVal>15){
                    printf("\n      %3d",primeCount[i]);
                    counterVal=0;
                } else {
                    printf("%3d",primeCount[i]);
                }
            }
            counterVal++;
        }
        cout<<"\n";
    }
    return 0;
}
//5! = 3 1 1
