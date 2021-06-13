#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	
	int findMaximum(int arr[], int n) 
	{
	    // code here
	    int i;
	    for(i=0; i<n-1; i++)
	    if(arr[i]<arr[i+1])
	      continue;
	    else
	      break;
	    return arr[i];
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
