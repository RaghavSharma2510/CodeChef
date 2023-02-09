#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,x;
        cin>>n;
        vector<int>arr(n,0);
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            arr[x]++;
        }
        for (int i = 0; i < n; i++)
        {
            if(arr[i]%2!=0)
            {
                cout<<i;
                break;
            }
        }
        
        
        cout<<endl;
    }
    return 0;
}