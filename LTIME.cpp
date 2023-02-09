#include<iostream>
using namespace std;

int main()
{
    long q,x;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x;
        if(x>=1 && x<=4)
        {
            cout<<"YES";
        }
        else
        cout<<"NO";
        cout<<endl;
    }
    return 0;
}