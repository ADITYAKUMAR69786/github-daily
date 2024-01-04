//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{

public:

vector<int> duplicates(long long arr[], int n) {

bool repeat = false;

//sort

vector<int> v2; sort(arr, arr + n);

for (int i = 1; i < n; i++) {

if (arr[i] == arr[i - 1] && (i == 1 || arr[i] != arr[i - 2])) {

v2.push_back(arr[i]);

repeat = true;

} }

if (!repeat) {

return {-1}; }

return v2;

} 
    
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends