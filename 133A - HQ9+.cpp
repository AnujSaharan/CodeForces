//CodeForces
//Problem 133A [HQ9+]

#include <iostream>
using namespace std;

int main()
{
int checker=0;
string str;
cin>>str;

for(unsigned int i=0;i<str.length();i++)
    {
    if((str[i]=='H')||(str[i]=='Q')||(str[i]=='9'))
        {
        checker++;
        }
    }
if(checker>0)
    {
    cout<<"YES";
    }
else
    {
    cout<<"NO";
    }
return 0;
}