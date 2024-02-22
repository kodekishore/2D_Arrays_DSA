#include<iostream>
using namespace std;
int main(){
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={9,8,7,6,5,4,3,2,1};
    int n=3;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            arr1[i][j]=arr1[i][j]+arr2[i][j];
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}