#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,a,b,x;
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>x;
        if(abs(a-b)%(x*2)==0)
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