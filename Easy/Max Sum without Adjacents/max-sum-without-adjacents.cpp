//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int maxsum(int *arr, int i,int n,vector<int>&dp)
    {
        if(i>=n)
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        
        return dp[i]=max(maxsum(arr, i+1,n,dp),maxsum(arr,i+2,n,dp)+arr[i]);
    }
    int findMaxSum(int *arr, int n) {
        // code here
        vector<int>dp(n+1,-1);
        int i=0;
        //int sum=arr[0];
        return maxsum(arr,i,n,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends