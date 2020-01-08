#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int numberOfStudents;
    scanf("%d",&numberOfStudents);
    int arr[numberOfStudents]={0};
    for(int i=0;i<numberOfStudents;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+sizeof(arr)/sizeof(arr[0]));
    for(int i=0;i<numberOfStudents;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
