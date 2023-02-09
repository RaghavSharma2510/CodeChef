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
        float x,y;
        cin>>x>>y;
        if(y<=(1.07*x))
        cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;
        q--;
    }
    return 0;
}