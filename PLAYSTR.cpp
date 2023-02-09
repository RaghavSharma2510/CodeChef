#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,n1=0,n2=0;
        string s1,s2;
        cin>>n;
        cin>>s1;
        cin>>s2;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='1')
            n1++;
            if(s2[i]=='1')
            n2++;
        }
        
        if(n1==n2)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        
        cout<<endl;
    }
    return 0;
}