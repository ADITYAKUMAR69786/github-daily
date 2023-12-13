//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    int mod = 1e9+7;
        int zero = 1,sum =2;
        for(int i =2; i<=n; i++){
            int temp = sum ;
            sum =(sum+zero)%mod;
            zero = temp;
           
        }
        
        return sum%mod ;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends