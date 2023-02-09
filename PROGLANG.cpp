#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int arr[6],flag=0;
        for (int i = 0; i < 6; i++)
        {
            cin>>arr[i];
        }
        for(int i=2;i<6;i+=2)
        {
        if((arr[i]==arr[0] && arr[i+1]==arr[1]) || (arr[i]==arr[1] && arr[i+1]==arr[0]))
        {
        cout<<(i/2);
        flag=1;
        break;
        }        
        }
        if(!flag)
        cout<<0;
        cout<<endl;
    }
    return 0;
}