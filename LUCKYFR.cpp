#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long int x;
        int count=0,r;
        cin>>x;
        while(x>0)
        {
            r=x%10;
            if(r==4)
            count++;
            x=x/10;
        }
        cout<<count;
        cout<<endl;
    }
    return 0;
}