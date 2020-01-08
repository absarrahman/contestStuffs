#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int days,year,months,remDays;

    scanf("%d",&days);
    year=days/365;
    days=days%365;
    months=days/30;
    remDays=days%30;
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",months);
    printf("%d dia(s)\n",remDays);
    return 0;
}
