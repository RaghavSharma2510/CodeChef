#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int s,x,y,z;
        cin>>s>>x>>y>>z;
        if((s-(x+y))>=z)
        cout<<"0";
        else if(s-x >=z || s-y >=z)
        cout<<"1";
        else
        cout<<"2";

        cout<<endl;
    }
    return 0;
}