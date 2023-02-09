#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;
    while(n)
    {
        char s[10000];
        cin>>s;
        char* p;
        p=strstr(s,"101");
        p=strstr(s,"010");
        if(p)
        {
            cout<<"Good";
        }
        else{
            cout<<"Bad";
        }
        cout<<endl;
        n--;



    }
    return 0;
}