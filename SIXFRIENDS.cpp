#include<iostream>
using namespace std;

int main()
{
    int q,x,y;
    cin>>q;
    while(q)
    {
        cin>>x>>y;
        if(3*x > 2*y)
        cout<<2*y;
        else
        cout<<3*x;
        cout<<endl;
        q--;
    }
    return 0;
}