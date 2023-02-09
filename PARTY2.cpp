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
        int n,x,k;
        cin>>n>>x>>k;
        if(n*x >k)
        cout<<"NO";
        else
        cout<<"YES";
        cout<<endl;
    }
    return 0;
}