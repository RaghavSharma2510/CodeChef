#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int p;
        cin>>p;
        int s=p%100;
        if(p<=10)
        cout<<p;
        else{
            int q=s+int(p/100);
            if(q>10)
            cout<<"-1";
            else
            cout<<q;
        }
        
        cout<<endl;
    }
    return 0;
}