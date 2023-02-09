#include<iostream>
using namespace std;

int main()
{
    int q,x,y;
    cin>>q;
    while(q)
    {
        cin>>x>>y;
        if(x/10 > y/20)
        cout<<"FIRST";
        else if(y/20 > x/10)
        cout<<"SECOND";
        else
        cout<<"ANY";
        cout<<endl;
        q--;
    }
    return 0;
}