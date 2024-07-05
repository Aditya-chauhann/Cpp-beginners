#include <bits/stdc++.h>
using namespace std;
int main(){
  int a;
  cout<<"enter number of digit to be used : ";
  cin>>a;
 int n;
  cout<<"enter a number  :"<<endl;
  cin>>n;
  int num=n;
  int rem=0;
  int sum=0;
  while(n>0){
    rem=n%10;
     sum=pow(rem,a)+sum;);
    n=n/10;
  }
  if(sum==num){
    cout<<"it is a armstrong number"<<endl;}

    else{
      cout<<"Not a armstrong number"<<endl;
  }
}