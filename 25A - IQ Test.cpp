//CodeForces
//Problem 25A [IQ Test]

#include <iostream>
using namespace std;

int main()
{
int in_arr[101];
int checker_arr[101];

int limit;
cin>>limit;

for(int in_index=0;in_index<limit;in_index++)
    {
    cin>>in_arr[in_index];
    }

int countereven=0,counterodd=0;
for(int checker_index=0;checker_index<limit;checker_index++)
    {
    if(in_arr[checker_index]%2==0) {checker_arr[checker_index]=1; countereven++;}
    else {checker_arr[checker_index]=0; counterodd++;}
    }

for(int out_index=0;out_index<limit;out_index++)
    {
    if(countereven>counterodd) {if(checker_arr[out_index]==0) {cout<<out_index+1; break;}}
    else {if(checker_arr[out_index]==1) {cout<<out_index+1; break;}}
    }
return 0;
}