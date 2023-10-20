//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    // Sorting the vector in ascending order
        sort(v.begin(),v.end());

        int ans ;
        // if the size of the vector is odd
        if(v.size() & 1)
            // Median is the middle element
            ans = v[v.size() / 2];
        // If the size of the vector is even
        else
            // Median is the average of the two middle elements
            ans = (v[v.size() / 2] + v[v.size() / 2 - 1]) / 2;
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends