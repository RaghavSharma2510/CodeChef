#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int count=0,n;
        cin>>n;
        string c;
        cin>>c;
        for (int i = 0; i < n; i++)
        {
            if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u')
            count=0;
            else
            count++;
            if(count>=4)
            break;
        }
        
        if(count>=4)
        cout<<"NO";
        else
        cout<<"YES";
        cout<<endl;
    }
    return 0;
}