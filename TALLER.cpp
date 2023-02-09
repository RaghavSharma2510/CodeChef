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
        int A,B;
        cin>>A>>B;
        if(A>B)
        cout<<"A";
        else
        cout<<"B";
        cout<<endl;
        q--;
    }
    return 0;
}