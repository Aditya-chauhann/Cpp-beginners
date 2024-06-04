#include<bits/stdc++.h>
using namespace std;
int main()
{
  int marks;
  cout<<"enter marks";
  cin>>marks;
  if(25>marks)
  {
    cout<<"F";
  }
    else if(marks<45)
    {
      cout<<"E";
    }
  else if(marks<60)
  {
    cout<<"D";
  }
  else if(marks<70)
  {
    cout<<"C";
  }
  else if(marks<80)
  {
    cout<<"B";
}
  else
  {cout<<"A";}
  return 0;
}
