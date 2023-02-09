#include<iostream>
using namespace std;

int main()
{
    long q,x,n;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x>>n;
        if(n>=x)
        {
            if(n%x ==0)
            cout<<"YES";
            else 
            cout<<"NO";
        }
        else
        cout<<"NO";

        cout<<endl;
    }
    return 0;
}