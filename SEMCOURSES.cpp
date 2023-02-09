#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q)
    {
       int x,y,z;
       cin>>x>>y>>z;
       cout<<x*y*z; 
        cout<<endl;
        q--;
    }
    return 0;
}