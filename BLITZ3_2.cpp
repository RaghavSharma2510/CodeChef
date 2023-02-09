#include<iostream>
using namespace std;

int main()
{
     long q,N,A,B,x;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>N>>A>>B;
        x=2*(180+N);
        cout<<x-(A+B)<<endl;

    }
    return 0;
}