#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        if(n<=5 || n==k)
        cout<<"0";
        else if(n>5)
        {
            if(n%5==0 && k%5==0)
            {
                cout<<(n-k)/5;
            }
            else
            if(n%5!=0 && k%5==0)
            {
                cout<<int((n-k)/5)+1;
            }
            else
            if(n%5==0 && k%5!=0)
            {
                cout<<int((n-k)/5);
            }
            else if(n%5!=0 && k%5!=0)
            {
                if(n-k >5)
                cout<<int((n-k)/5);
                else
                cout<<"1";
            }
        }
        cout<<endl;
    }
    return 0;
}