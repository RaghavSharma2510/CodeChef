#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,x,l=0,r=0,max=0,min=0;
        cin>>n>>x;;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='L')
            l++;
            else
            r++;
        }
        if(l>r)
        {
        max=l;
        min=r;
        }
        else{
        min=l;
        max=r;
        }
        cout<< (max-min)+min+1;
        


        cout<<endl;
    }
    return 0;
}