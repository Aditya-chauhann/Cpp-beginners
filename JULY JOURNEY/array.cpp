#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,i;
  cout<<"Enter number of elements :";
  cin>>n;
  int arr[n];
  cout<<"enter elements ";
  for(i=0;i<n;i++){
    cout<<"element "<<i+1<<" : ";
    cin>>arr[i];
  }
  cout<<"final array is : ";
  for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  
}