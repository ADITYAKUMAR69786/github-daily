//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	    // code here'
	    vector<float> ans(n, 0); // initialize a vector to store the average values
	    float avg = 0; // initialize a variable to store the sum of numbers
	    for (int i = 0; i < n; i++) { // iterate through the array
	        avg += (float)arr[i]; // add the current number to the sum
	        ans[i] = (float)avg / (i + 1); // calculate the average and store it in the vector
	    }
	    return ans; // return the vector of average values
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
        auto ans = ob.streamAvg(arr, n);
        cout << fixed<< setprecision(2);
        for (auto x : ans) {
            cout <<x<<" ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends