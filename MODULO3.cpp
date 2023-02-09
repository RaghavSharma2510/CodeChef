#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,steps=0,flag=0;
        cin>>a>>b;
        while(1)
        {
            if(a%3==0 || b%3==0)
            {   
                cout<<"0";
                break;
            }
            else if(a%3==b%3)
            {
                cout<<"1";
                break;
            }
            else
            {
                cout<<"2";
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}