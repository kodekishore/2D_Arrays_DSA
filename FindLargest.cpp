#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,8,6,9,4,5,6};
    int max=arr[0][0];
    int n=3;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    cout<<max;
}