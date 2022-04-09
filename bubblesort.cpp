#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define max 20
int main(){
    int a[max];
    int n;
    cout<<"enter the no of element u want to insert:"<<endl;
    cin>>n;
    cout<<"enter the elements to the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   
   
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
           if( a[j]>a[j+1]){
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
        }
    }
    
    cout<<"displaying the array elements:"<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<a[i]<<" ";
    }


return 0;
}