#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,sum=0,max=0;
        map<int,int> m;
        vector<int>temp;
        cin>>n;
        for (int  i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
            m[x]++;
        }
        for (int i = 0; i < m.size(); i++)
        {
           if(m[i]>max)
           {
            max=m[i];
           }
           sum+=m[i];
        }
        cout<<abs(sum-max);
        cout<<endl;
    }
    return 0;
}