#include <iostream>
using namespace std;

int main()
{
  int a,i,b;
  cout<<"Enter the number :";
  cin>>a;
  for (i=0;i<13;i++)
  {
    b = a*i;
    cout<<a<<"*"<<i<<"="<<b<<endl;
  }
  return 0;
}
