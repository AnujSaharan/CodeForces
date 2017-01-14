//CodeForces
//Problem 1A [Theater Square]

#include <iostream>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;
while(t--)
  {
    long long n,m,a;
    cin>>n>>m>>a;
    
    long long tiles1=n/a;
    long long tiles2=m/a;
    if(n%a!=0)
      {
        tiles1++;
      }
      if(m%a!=0)
      {
        tiles2++;
      }
      long long result=tiles1*tiles2;
      cout<<result;
  }
return 0;
}
