#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows : ";
    cin>>n;
    int m;
    cout<<"Enter the no of columns : ";
    cin>>m;
    int arr[m][n];
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
           cin>>arr[i][j];
        }
    }
     //      sum 
    int sum=0;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
           sum += arr[i][j];
        }
    } 
    cout<<sum;
}