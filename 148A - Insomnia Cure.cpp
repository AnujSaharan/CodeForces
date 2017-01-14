//CodeForces
//Problem 148A [Insomnia Cure]

#include <iostream>
using namespace std;

int main()
{
int punched,tailed,wedgied,threatened,total,counter=0;
cin>>punched>>tailed>>wedgied>>threatened>>total;

for(int i=1;i<=total;i++)
    {
    if((i%punched==0)||(i%tailed==0)||(i%wedgied==0)||(i%threatened==0))
        {
        counter++;
        }
    }
cout<<counter;
return 0;
}