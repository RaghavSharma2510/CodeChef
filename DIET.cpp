#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k,x,sum=0,flag=0;
        cin>>n>>k;
        vector<int>arr;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            arr.push_back(x);
        
        }
        for (int i = 0; i < n; i++)
        {
            sum+=arr[i];
            if(sum<k)
            {
                cout<<"NO "<<(i+1);
                flag=0;
                break;
            }
            else
            {
                sum-=k;
                flag=1;
            }

        
        }
           
        if(flag)
        {
            cout<<"YES";
        }

        
        cout<<endl;
    }
    return 0;
}