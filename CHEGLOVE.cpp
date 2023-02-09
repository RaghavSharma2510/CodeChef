#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,x,flag1=0,flag2=0;
        vector<int>l;
        vector<int>g;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            l.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            g.push_back(x);
        }
        int i=0,j=n-1;
        while(i<n)
        {
            
            if(l[i]>g[i])
            {
                flag1=1;
                break;
            }
            i++;
        }
        i=0;
        while (j>=0 && i<n)
        {
            
            if(l[j]>g[i])
            {
                flag2=1;
                break;
            }
            
            j--;
            i++;
        }
        
        if(flag1==1 && flag2==1)
        {
            cout<<"none";
        }
        else if(flag1==0 && flag2==1)
        {
            cout<<"front";
        }
        else if(flag1==1 && flag2==0)
        {
            cout<<"back";
        }
        else
        {
            cout<<"both";

        }
        
        cout<<endl;
    }
    return 0;
}