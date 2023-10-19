//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string delAlternate(string S) {
        // code here
         // store the resulting string in final_S
        string final_S = "";
        // go through whole string
        for (int i = 0; i < S.length(); i++) {
            // take S[i] for only odd position
            if (i % 2 == 0) final_S += S[i];
        }
        // final string
        return final_S;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.delAlternate(S) << endl;
    }
    return 0;
}

// } Driver Code Ends