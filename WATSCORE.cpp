#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,x,y,max=0;
        cin>>n;
        vector<int>arr(12,0);
        for (int i = 0; i < n; i++)
        {
            cin>>x>>y;
            if(arr[x]<y)
            arr[x]=y;
        }
        int sum=0;
        for (int i = 1; i < 9; i++)
        {
            sum+=arr[i];
        }
        cout<<sum;
        
        
        
        cout<<endl;
    }
    return 0;
}