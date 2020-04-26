#include <bits/stdc++.h>
#define ll long long
#define SIZE 10000000
using namespace std;

template <typename Map>
bool map_compare (Map const &lhs, Map const &rhs) {
    return lhs.size() == rhs.size()&& equal(lhs.begin(), lhs.end(),rhs.begin());
}


void boostCin(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
    boostCin();
    int testCase,c(0);
    string s1,s2;
    cin>>testCase;
    while(testCase--){
        //vector<string> vMinus;
        cin>>s1>>s2;
        int numStart(0),x(1);
        string subS1,subS2;
        map<string,string> m1,m2,mAdd,mSub,mValChange;

        for(int i=1;i<(s1.size());i++){
            if(s1[i]==':'){
                subS1=s1.substr(x,((i-1)-x)+1);//((i-1)-x) means end-start+1
//                cout<<x<<" x"<<endl;
//                cout<<((i-1)-x)+1<<" (i-1)-x"<<endl;
//                cout<<subS1<<" kichu ekta"<<endl;
                numStart=i+1;
              //  m1[subS1]=0;
            }
            if((s1[i]==',')||((s1[i])=='}')){
                x=i+1;
                string value1String=s1.substr(numStart,((i-1)-numStart)+1);
             //   cout<<subS1<<" subS1 "<<value1String<< "is value "<<i<<"i "<<endl;
                m1[subS1]=value1String;
            }
        }

        numStart=0,x=1;

        for(int i=1;i<(s2.size());i++){
            if(s2[i]==':'){
                subS2=s2.substr(x,((i-1)-x)+1);//((i-1)-x) means end-start+1
//                cout<<x<<" x"<<endl;
//                cout<<((i-1)-x)+1<<" (i-1)-x"<<endl;
//                cout<<subS1<<" kichu ekta"<<endl;
                numStart=i+1;
              //  m2[subS2]=0;
            }
            if((s2[i]==',')||((s2[i])=='}')){
                x=i+1;
                string value1String=s2.substr(numStart,((i-1)-numStart)+1);
             //   cout<<subS1<<" subS1 "<<value1String<< "is value "<<i<<"i "<<endl;

                m2[subS2]=value1String;
            }
        }


        if(map_compare(m1,m2)){
            cout<<"No changes"<<endl;
        } else {
            for(auto it:m1){
                string keyIndex=it.first;
                string keyValue=it.second;
                auto m2KeyIndex=m2.find(keyIndex);
                if(m2KeyIndex!=m2.end()){
                    if(m2KeyIndex.second==keyValue){
                        continue;
                    } else {
                        mValChange[keyIndex]=keyValue;
                    }
                } else {
                    mSub[keyIndex]=keyValue;
                }

            }

            for(auto it:m2){
                string keyIndex=it.first;
                string keyValue=it.second;
                auto m1KeyIndex=m1.find(keyIndex);
                if(m1KeyIndex!=m1.end()){
                    if(m1KeyIndex.second==keyValue){
                        continue;
                    } else {
                        mAdd[keyIndex]=keyValue;
                    }
                }

            }

            int addSize=mAdd.size();
            int subSize=mSub.size();
            int chngSize=mValChange.size();

            if(!mAdd.empty()){
                if(addSize>0){
                    int _count(0);
                    cout<<"+";
                    for(auto it:mAdd){
                        cout<<it.first;
                        if(_count!=0){
                            cout<<",";
                        }
                    }
                }
                cout<<endl;
            }

            if(!mSub.empty()){
                if(subSize>0){
                    int _count(0);
                    cout<<"-";
                    for(auto it:mSub){
                        cout<<it.first;
                        if(_count!=0){
                            cout<<",";
                        }
                    }
                }
                cout<<endl;
            }

            if(!mValChange.empty()){
                if(chngSize>0){
                    int _count(0);
                    cout<<"*";
                    for(auto it:mValChange){
                        cout<<it.first;
                        if(_count!=0){
                            cout<<",";
                        }
                    }
                }
                cout<<endl;
            }


        }
        cout<<endl;


    }
    return 0;
}
