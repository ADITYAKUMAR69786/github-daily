//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
	    int l = lower_bound(arr, arr + n, x) - arr;
	    //using upper_bound to find the first element greater than x.
	    int r = upper_bound(arr, arr + n, x) - arr;
	    //calculating the count of numbers greater than x (r) and less than x (n-l)
	    vector<int> vec = {r,n-l};
	    //returning the count of numbers greater than and less than x.
	    return vec;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends