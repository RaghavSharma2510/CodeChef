#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int max(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        return a;
        else
        return c;
    }
    else if(b>a)
    {
        if(b>c)
        return b;
        else
        return c;
    }
}
int main()
{
    int q;
    cin>>q;
    while(q)
    {
        int n;
        cin>>n;
        int a[n],b[n],c[n],sum=0,k1,k2,ma,mb;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>c[i];
        }
        cin>>k1>>k2;
        for (int i = 0; i < n; i++)
        {   if(k1>0 && k2>0)
            sum+=max(a[i],b[i],c[i]);
            else if(k1>0 && k2<1)
            sum+=max(a[i],-1,c[i]);
            else if(k1<0 && k2<0)
            sum+=max(-1,-1,c[i]);
        }
        cout<<sum;
        cout<<endl;
        q--;
    }
    return 0;
}