#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,flag=1;
        cin>>n;
        string s;
        cin>>s;
        if(n%2!=0)
        cout<<"NO";
        else
        {
            unordered_map<char,int>mpp;
            for(auto it:s)
            {
            mpp[it]++;
            }
            for(auto it:mpp)
            {
                if(it.second%2!=0)
                {
                cout<<"NO";
                flag=0;
                break;
                }
            }
            if(flag)
            cout<<"YES";

            
        }
        cout<<endl;
    }
    return 0;
}