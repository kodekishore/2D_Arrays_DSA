#include<iostream>
using namespace std;
int main(){
    int arr[2][3]={1,2,3,8,6,9};
    int m=2,n=3;
    int trn[n][m];
    cout<<"print matrix before transpose";
    cout<<endl;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"print matrix after transpose";
    cout<<endl;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            trn[j][i]=arr[i][j];
        }
        
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<trn[i][j]<<" ";
        }
        cout<<endl;
    }
   
}