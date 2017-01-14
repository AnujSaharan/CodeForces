//CodeForces
//Problem 271A [Beautiful Year]

#include <iostream>
using namespace std;

int main()
{
int year;
cin>>year;

while(1)
    {
    year++;
    int a=year%10;
    int b=(year/10)%10;
    int c=(year/100)%10;
    int d=(year/1000)%10;
    if((a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d)) {cout<<year<<" "; break;}
    }
return 0;
}