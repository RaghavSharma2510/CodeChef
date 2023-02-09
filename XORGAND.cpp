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
        int n,j,i;
        cin>>n;
        vector<int>v;
        for ( i = 0; i < n; i++)
        {
            cin>>j;
            v.push_back(j);
        }
        
        int l,r,x;
        cin>>j;
        while(j)
        {
            cin>>l>>r>>x;
            int p=0;
            i=l-1;
            while(i<=r-1)
            {
                if((v[i]^x)>(v[i]&x))
                p++;
                i++;
            }
            cout<<p<<endl;
            j--;
            
        }
        q--;
    }
    return 0;
}