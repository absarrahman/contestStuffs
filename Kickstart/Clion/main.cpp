#include <bits/stdc++.h>
using namespace  std;

const string i[5] = {"a_example","b_small","c_medium","d_quite_big","e_also_big"};
FILE *out;

int main(){
    int lol = 4;
    string input = "input/"+i[lol]+".in";
    string o = "output/"+i[lol]+".out";
    freopen(input.c_str(),"r",stdin);
    out=fopen(o.c_str(),"w");
    int m,n;
    cin>>m>>n; //maxslice and types of slice
    int arr[n];
    int b[n]={0};

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x(0);
    int counter(0);

    for(int i=n-1;i>=0;i--){
        x=m-arr[i];
        if(x<0){
            continue;
        } else {
            m=m-arr[i];
            b[i]=1;
            counter++;
        }
    }

    fprintf(out,"%d\n",counter);

    for(int i=0;i<n;i++){
        if(b[i]==1){
            fprintf(out,"%d ",i);
        }
    }
    fclose(out);

    return 0;
}
