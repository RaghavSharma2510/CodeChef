#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        char s;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>s;
            if(s=='A')
            {
                cout<<"T";
            }
            else if(s=='T')
            {
                cout<<"A";
            }
            else if(s=='C')
            {
                cout<<"G";
            }
            else if(s=='G')
            {
                cout<<"C";
            }
        }

        
        cout<<endl;
    }
    return 0;
}