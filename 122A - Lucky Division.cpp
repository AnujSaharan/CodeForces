//CodeForces
//Problem 122A [Lucky Division]

#include <bits/stdc++.h>
using namespace std;

vector<int> lucky;
void lucky_number_generator()
{
vector<int> current;
vector<int> next;
current.push_back(4);
current.push_back(7);
lucky.push_back(4);
lucky.push_back(7);

int value=0;
while(value<1000)
    {
    for(unsigned int i=0;i<current.size();++i)
        {
        value=current[i]*10+4;
        next.push_back(value);
        lucky.push_back(value);
        value=current[i]*10+7;
        next.push_back(value);
        lucky.push_back(value);
        }
   current=next;
   next.clear();
    }
}

int main()
{
lucky_number_generator();

long long in_num;
cin>>in_num;

int flag=0;
for(unsigned int index=0;index<lucky.size();index++)
    {
    if(in_num%lucky[index]==0)
        {
        flag=1;
        break;
        }
    }
(flag==1)?cout<<"YES":cout<<"NO";
return 0;
}