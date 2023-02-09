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
        int n,x,k,sum=0;
        cin>>n>>x;
        vector<int>h;
        for (int i = 0; i < n; i++)
        {
            cin>>k;
            h.push_back(k);
            if(k%x==0)
            {
                sum+=k/x;
            }
            else
            {
                sum+=(k/x + 1);
            }
        }
        k=*max_element(h.begin(),h.end());
        cout<<min(k,sum);
        cout<<endl;
        q--;
    }
    return 0;
}