#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,8,6,9,4,5,6};
    int n=3;
    cout<<"print matrix before transpose : ";
    cout<<endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            int temp =arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<"print matrix after transpose without using extra array : ";
    cout<<endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

   
}