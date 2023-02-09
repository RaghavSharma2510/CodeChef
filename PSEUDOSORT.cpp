#include<iostream>
using namespace std;

int main()
{
    long q,n;
    cin>>q;
    while(q)
    {
        cin>>n;
        long A[n],j=0;
        for (int i = 0; i < n; i++)
        {
            cin>>A[i];
       if (A[i-1]>A[i] && i>=1) 
       {
           swap(A[i],A[i-1]);
           if(A[i-2]>A[i-1] && i>=2)
           {
               j+=2;
           }
           else if(A[i-2]<A[i-1] && i>=2)
           {
               j+=1;
           }
           else if(i==1)
           {
               j+=1;
           }
           else
           {
               j+=1;
           }
        }
       
     }
        if(j<2)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;
        q--;
    }
    return 0;
}