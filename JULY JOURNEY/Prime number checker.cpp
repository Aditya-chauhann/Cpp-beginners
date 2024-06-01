#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter a number"<<endl;
  cin>>n;
  int i=2;
  while(i<n)
    {
      if(n%i==0)
      {
        cout<<"as "<<n<<" is divisible by "<<i<<" it's not a prime"<<endl;
        
      }
      else{
         cout<<"as "<<n<<" is not  divisible by "<<i<<" it's  a prime"<<endl;
       
      }
       i=i+1;
    }
}