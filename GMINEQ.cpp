#include<iostream>
using namespace std;

int main()
{
    int q,n,a,b;
    cin>>q;
    while(q)
    {
        cin>>n;
        int A[n],j=0,x=0;
        a=0;
        b=0;
        for (int i = 0; i < n; i++)
        {
            cin>>A[i];
            if(A[i]==1)
            a++;
            else
            b++;
        }
        x=abs(a-b);
        if(x==0)
        cout<<"YES";
        else if(x==1)
        cout<<"YES";
        else if(x==2)
    {
        if(a%2 == 0 && b%2==0)
        {
            cout<<"YES";
        }
        else
        cout<<"NO";
    }
    else
    cout<<"NO";
    cout<<endl;
        q--;
    }
    return 0;
}