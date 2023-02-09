#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int sx,sy,ex,ey;
        cin>>sx>>sy>>ex>>ey;
        if(sx!=ex && sy!=ey)
        cout<<"1";
        else if(sx==ex || sy==ey)
        cout<<"2";
        else if(sx==ex && sy==ey)
        cout<<"0";
        cout<<endl;
    }
    return 0;
}