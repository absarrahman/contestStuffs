#include <bits/stdc++.h>
#define ll long long int
using namespace  std;

const string i[5] = {"a_example","b_small","c_medium","d_quite_big","e_also_big"};
FILE *out;


void solve(){
    ll bookScore,nLibraries,nDays;
    cin>>bookScore>>nLibraries>>nDays;
    ll score[bookScore]; // keeps the score of books
    struct Book{
        ll bookId; //tracks id
        ll bScore; //tracks score
    };
    struct Library{
        //ll nBooks;// Number of library books
        vector<Book> vBookId; //tracks details of books in the library
    };
    Library lArray[nLibraries];// tracks library books
    for(int i=0;i<bookScore;i++){ // book score
        cin>>score[i];
    }

    ll libraryBooks,signUpProcess,booksPerDay;

    for(int i=0;i<nLibraries;i++){
        cin>>libraryBooks>>signUpProcess>>booksPerDay;//number of books in library,sign up,books per day
        for(int j=0;j<libraryBooks;j++){
            ll bookId;
            cin>>lArray[i].vBookId[j].bookId;
            lArray[i].vBookId[j].bScore=score[j];
        }
    }
    cout<<lArray[0].vBookId[1].bScore;


}


int main(){
//    int lol = 4;
//    string input = "input/"+i[lol]+".in";
//    string o = "output/"+i[lol]+".out";
//    freopen(input.c_str(),"r",stdin);
//    out=fopen(o.c_str(),"w");
    solve();

    return 0;
}
