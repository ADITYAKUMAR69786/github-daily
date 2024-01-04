//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	int ans=INT_MAX;
    int solve(int idx,int sum,int total,int arr[],int n,vector<vector<int>>&dp){
        if(idx<0){
            int first=sum;
            int second=total-sum;
            ans=min(ans,abs(first-second));
            return ans;
            
        }
        if(dp[idx][sum]!=-1) return dp[idx][sum]; 
        int ans=INT_MIN;
        int take=0;
        int ntake=solve(idx-1,sum,total,arr,n,dp);
        take=solve(idx-1,sum+arr[idx],total,arr,n,dp);
        return dp[idx][sum]= min(take,ntake);
        
    }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;i++) sum+=arr[i];
	    vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
	   return solve(n-1,0,sum,arr,n,dp);
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends