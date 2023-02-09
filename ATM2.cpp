#include<iostream>
#include<vector>
using namespace std;

int main()
{
    long q,N,K;
    int x;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>N>>K;
        vector<int>v(N,0);
        for (int j = 0; j < N; j++)
        {
            cin>>x;
            v[j]=x;
        }
        for (int j = 0; j < N; j++)
        {
            if(K>=v[j])
            {
                cout<<"1";
                K=K-v[j];
            }
            else
            cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}