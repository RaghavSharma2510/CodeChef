#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,diff;
        cin>>a>>b;
        diff=b-a;
        if(diff%3==0 || (diff-1)%3==0)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;
    }
    return 0;
}