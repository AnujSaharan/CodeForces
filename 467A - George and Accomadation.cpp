//CodeForces
//Problem 467A [George and Accomodation]

#include <bits/stdc++.h>
using namespace std;

int main()
{
int total_rooms;
cin>>total_rooms;

int total_capacity,capacity_filled,available_rooms=0;
while(total_rooms--)
    {
    cin>>capacity_filled>>total_capacity;
    if(total_capacity-capacity_filled>=2) {available_rooms++;}
    }
cout<<available_rooms;
return 0;
}