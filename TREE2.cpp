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
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        for (int i = 0; i < n-1; i++)
        {
            if(arr[i]==arr[i+1])
            arr.erase(i);
            n--;
        }
        

        cout<<endl;
    }
    return 0;
}