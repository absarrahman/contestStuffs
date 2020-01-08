#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    string s;
    scanf("%d",&testCase);
    getline(cin,s);
    while(testCase--)
    {
        getline(cin,s);
        int c(0);
        for(int i=0; i<s.size(); i++)
        {
            if((s[i]!='W')&&(s[i]!='N')&&(s[i]!='D'))
            {
                ++c;
               // cout<<"Arr"<<s[i]<<"\n";
            }
        }
       // printf("%d count \n",c);
        int over=c/6;
        int balls=c%6;
        if(over==0)
        {
            if(balls==1)
            {
                printf("%d BALL\n",balls);
            }
            else
            {
                printf("%d BALLS\n",balls);
            }
        }
        else
        {
            if(over==1)
            {
                if(balls==1)
                {
                    printf("1 OVER %d BALL\n",balls);
                } else if (balls==0){
                    printf("1 OVER\n");
                } else {
                    printf("1 OVER %d BALLS\n",balls);

                }
            } else {
                if(balls==1)
                {
                    printf("%d OVERS %d BALL\n",over,balls);
                }
                else if (balls==0){
                    printf("%d OVERS\n",over);
                }
                else
                {
                    printf("%d OVERS %d BALLS\n",over,balls);
                }
            }
        }

    }
    return 0;
}
