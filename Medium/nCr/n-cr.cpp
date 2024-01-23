//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
#define mod (int)(1e9 + 7)
int nCr(int n, int r)
{
    if (n < r)
        return 0;

    vector<int> prev(n + 1, 0), curr(n + 1, 0);
    prev[0] = 1;
    curr[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            curr[j] = (prev[j - 1] + 0LL + prev[j]) % mod;
        }
        prev = curr;
    }
    return curr[r];
}
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends