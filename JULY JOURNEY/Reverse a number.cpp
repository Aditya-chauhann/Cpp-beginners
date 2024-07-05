#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
  cout<<"enter a number to be reversed :"<<endl;
  cin>>n;
  int num=n;
  int rem=0;
  int rev=0;
  while(n>0){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
  }
  cout<<"the reverse of "<<num<<" is "<<rev<<endl;

}