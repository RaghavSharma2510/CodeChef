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
        if((z<x && z<y)||(z%x!=0 && z%y!=0))
        cout<<"NONE";
        else if(z%x==0 && z%y==0)
        cout<<"ANY";
        else if(z%x == 0)
        cout<<"CHICKEN";
        else if(z%y==0)
        cout<<"DUCK";

        cout<<endl;
        q--;
    }
    return 0;
}