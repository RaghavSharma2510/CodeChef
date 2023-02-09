    #include<iostream>
    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <algorithm>
    using namespace std;

    int main()
    {
        int q;
        cin>>q;
        while(q--)
        {
            int x;
            cin>>x;
            if(x>30)
            cout<<"YES";
            else
            cout<<"NO";
            cout<<endl;
        }
        return 0;
    }