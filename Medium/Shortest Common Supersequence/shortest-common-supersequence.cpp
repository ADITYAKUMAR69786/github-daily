//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    int dp[1005][1005];
    
    int help(string s1, string s2, int n, int m){
        if(n<0 || m<0) return 0;
        if(dp[n][m]!=-1) return dp[n][m];
        if(s1[n]==s2[m]) return dp[n][m]=1+help(s1,s2,n-1,m-1); 
        return dp[n][m] = max(help(s1,s2,n-1,m),help(s1,s2,n,m-1));
    }
    
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        memset(dp,-1,sizeof(dp));
        int temp = help(X,Y,X.length()-1,Y.length()-1);
        return (n+m)-temp;
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends