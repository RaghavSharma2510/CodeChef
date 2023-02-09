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
    while(q)
    {
        int n;
        cin>>n;
        if(n<4)
        cout<<n;
        
        cout<<endl;
        q--;
    }
    return 0;
}