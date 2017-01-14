//CodeForces
//Problem 131A [cAPS LOCK]

#include <iostream>
using namespace std;

int main()
{
string str;
cin>>str;

char first=toupper(str[0]);

int strlength=0;
while(str[strlength]!='\0')
    {
    strlength++;
    }
int checker=0;
for(int i=0;i<strlength;i++)
    {
    if(isupper(str[i])||isdigit(str[i]))
        {
        checker++;
        }
    }

if(checker==strlength)
    {
    for(int i=0;i<strlength;i++)
        {
        str[i]=tolower(str[i]);
        cout<<str[i];
        }
    }

else if((checker==strlength-1)&&(islower(str[0])))
    {
    cout<<first;
    for(int i=1;i<strlength;i++)
        {
        str[i]=tolower(str[i]);
        cout<<str[i];
        }
    }

else
     {
    for(int i=0;i<strlength;i++)
        {
        cout<<str[i];
    }
}
return 0;
}