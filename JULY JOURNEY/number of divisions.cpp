#include <bits/stdc++.h>
using namespace std;
int main(){
 cout<<" enter a number : ";
  int a;
  cin>>a;
  int count=0;
  for(int i=1;i<=a;i++){
    if(a%i==0){
      count++;
       cout<<count<<") "<<i<<endl;
    }
  }
   cout<<"number of divisions of "<<a<< " is "<< count;
}