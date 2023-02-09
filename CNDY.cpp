#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,x,flag=1;
        cin>>n;
        unordered_map<int,int>mpp;
        for (int i = 0; i < 2*n; i++)
        {
            cin>>x;
            mpp[x]++;
        }
        for(auto it:mpp)
        {
            if(it.second>=3)
            {
            flag=0;
            break;
            }
        }
        if(flag)
        cout<<"Yes";
        else
        cout<<"No";

        
        cout<<endl;
    }
    return 0;
}