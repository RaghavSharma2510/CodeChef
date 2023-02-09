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
        int x,y;
        cin>>x>>y;
        if(x>0 || y>0)
        {
        if(x==y)
        cout<<"YES";
        else
        cout<<"NO";
        }
        else
        cout<<"NO";
        cout<<endl;
        q--;
    }
    return 0;
}