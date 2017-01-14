//CodeForces
//Problem 82A [Double Cola]

#include <bits/stdc++.h>
using namespace std;

int main()
{
string initial_queue[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};

long long in_num;
cin>>in_num;

while(in_num>5)
    {
    in_num=(in_num/2)-2;
    }
cout<<initial_queue[in_num-1];
return 0;
}