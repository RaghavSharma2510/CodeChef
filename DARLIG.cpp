#include <iostream>
using namespace std;

int main() {
	// your code goes here
    long q,x,n;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x>>n;
        x=x%4;
        if(x==0)
        {
            if(n==0)
            {
                cout<<"OFF";
            }
            else
            {
                cout<<"ON";
            }
        
        }
        else
        {
            if(n==0)
            {
                cout<<"ON";
            }
            else if(n==1)
            {
                cout<<"AMBIGUOUS";
            }
            
        }
        cout<<endl;
    }
	return 0;
}
