//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    using ll = long long;
    const int mod = 1e9+7;
    ll mod_add(ll a , ll b , int m)
    {
        return (a%m + b%m ) %m;
    }
    ll mod_mul(ll a , ll b , int m)
    {
        return (a%m * b%m ) %m;
    }
    
    long long sequence(int n){
        // code here
        ll cnt = 2;
        ll prev = 1;
        for(int i=2 ; i<=n; i++)
        {
            ll curr = 1;
            for(int j = 0 ; j <i ;j++)
            {
                curr = mod_mul(curr , cnt , mod) ;
                cnt++;
            }
            prev = mod_add(curr , prev , mod);
        }
        
        return prev;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends