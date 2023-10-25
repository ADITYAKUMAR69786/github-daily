//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int findFocalLength(float R, string type){
	    //Code here
	   float d = (R / 2.0);
		
		// If the lens is convex, multiply distance by -1
		if(type == "convex")
			d *= -1;
		
		// Round the distance down to the nearest integer
		int f = floor(d);
		
		// Return the focal length
		return f;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		float n;
		string type;
		cin >> type >> n;
		Solution ob;
		int ans = ob.findFocalLength(n, type);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends