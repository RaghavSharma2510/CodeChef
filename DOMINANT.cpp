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
    while(q--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>(b+c) || b>(a+c) || c>(a+b))
        cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;
    }
    return 0;
}