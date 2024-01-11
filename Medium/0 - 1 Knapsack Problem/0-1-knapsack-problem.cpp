//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int solve(int index , int wt[] , int val [] , int capacity)
    {
        if(index==0)
        {
            if(wt[0]<=capacity)
            {
                return val[0];
            }
            return 0;
        }
        
        int include =0 ;
        if(wt[index] <= capacity)
        {
            include = val[index] + solve(index-1,wt,val,capacity-wt[index]);
        }
        int exclude = solve(index-1,wt,val,capacity);
        
        return max(include,exclude);
    }
    int solveMem(int index , int wt[] , int val [] , int capacity ,vector <vector<int>>&dp)
    {
        if(index==0)
        {
            if(wt[0]<=capacity)
            {
                return dp[0][capacity] = val[0];
            }
            return dp[0][capacity]=0;
        }
        
        if(dp[index][capacity]!=-1)
        {
            return dp[index][capacity];
        }
        
        int include =0 ;
        if(wt[index] <= capacity)
        {
            include = val[index] + solveMem(index-1,wt,val,capacity-wt[index], dp);
        }
        int exclude = solveMem(index-1,wt,val,capacity, dp);
        
        dp[index][capacity]=max(include,exclude);
        return dp[index][capacity];
    }
    int solveTab(int n , int wt[] , int val [] , int capacity )
    {
        vector <vector<int>>dp(n,vector<int>(capacity+1,0));
        for(int i=0 ; i<=capacity ; i++)
        {
            if(wt[0]<=i)
            {
                dp[0][i]=val[0];
            }
        }
        
        
        for(int i=1 ; i<n ; i++)
        {
            for(int j=0 ; j<=capacity ; j++)
            {
                int include =0 ;
                if(wt[i]<=j)
                {
                    include = val[i] + dp[i-1][j-wt[i]];
                }
                int exclude = dp[i-1][j];
                
                dp[i][j]=max(include,exclude);
            }
        }
        
        return dp[n-1][capacity];
    }
    int optimised(int n , int wt[] , int val [] , int capacity )
    {
        vector<int>first(capacity+1, 0);
        for(int w=0; w<=capacity ; w++ )
        {
            if(wt[0]<=w)
            {
                first[w]=val[0];
            }
        }
        
        for(int i=1; i<n ; i++)
        {
            vector<int>second(capacity+1,0);
            for(int w=0 ; w<=capacity ; w++){
                int include =0;
                if(wt[i]<=w){
                    include = val[i] + first[w-wt[i]];
                }
                int exclude = first[w];
                second[w] = max(include, exclude);
            }
            first=second;
        }
        
        return first[capacity];
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        return optimised(n,wt,val,W);

    }


};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends