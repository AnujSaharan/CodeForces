//CodeForces
//Problem 520A [Pangram]

#include <bits/stdc++.h>
using namespace std;

int main()
{
string alphabets="abcdefghijklmnopqrstuvwxyz";

int n; //Useless
cin>>n; //Useless

string inputstr;
cin>>inputstr;
transform(inputstr.begin(),inputstr.end(),inputstr.begin(),::tolower);
sort(inputstr.begin(),inputstr.end());

inputstr.erase(unique(inputstr.begin(),inputstr.end()),inputstr.end());

if(inputstr==alphabets) {cout<<"YES";}
else {cout<<"NO";}

return 0;
}