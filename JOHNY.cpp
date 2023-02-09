#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
      return mid;

    if (arr[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k,x,y;
        cin>>n;
        vector<int>arr;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            arr.push_back(x);
        }
        cin>>k;
        y=arr[k-1];
        sort(arr.begin(),arr.end());
        x=(binarySearch(arr,y,0,n));
        cout<<(x+1)<<endl;
    }
    return 0;
}