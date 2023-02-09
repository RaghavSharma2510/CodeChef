#include <iostream>
using namespace std;

int main() {
	int q;
	cin>>q;
	while(q--)
	{
	    int a, b,flag=0,m;
	    cin>>a>>b;
	    m=b%a;
	    if(m==0)
	        flag=1;
	    else
	    {
	        for(int i=1;i<=m;i++)
	        {
	            if((b+i)%(a+i)==0)
	            {
	                flag=1;
	                break;
	            }
	        }
	    }
	    if(flag)
	    {
	        cout<<"YES";
	    }
	    else
	    cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
