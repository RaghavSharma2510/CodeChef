//COPIED

#include <iostream>
using namespace std;
void solve(){
    int N;
    cin>>N;
    int A[N];
    int B[N];
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        A[i]=x;
    }
     for(int i=0;i<N;i++){
        int x;
        cin>>x;
        B[i]=x;
    }
    int diff[N];
    //  int count=0;
    diff[0]=A[0];
    for(int i=1;i<N;i++){
       diff[i]=A[i]-A[i-1];
    }
    int count=0;
    for(int i=0;i<N;i++){
        if(B[i]<=diff[i]){
            count++;
        }
    }
    cout<<count<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
