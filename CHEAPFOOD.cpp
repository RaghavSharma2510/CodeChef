#include<iostream>
using namespace std;

int main()
{
    int q,x;
    cin>>q;
    while(q)
    {
        cin>>x;
        if(x-100 < 0.9*x)
        cout<<"100";
        else
        cout<<0.1*x;
        cout<<endl;
        q--;
    }
    return 0;
}