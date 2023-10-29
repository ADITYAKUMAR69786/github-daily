//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	vector<long long int> find(int l, int b, int h)
	{
	    // Code here
	    long long int L = l, B = b, H = h;
		long long int area = 2LL*(L*H + B*H + L*B);
		long long int volume = (L*B*H*1LL);
		vector<long long int >res;
		res.push_back(area);
		res.push_back(volume);
		return res;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int l, b, h;
		cin >> l >> b >> h;
		Solution ob;
		vector<long long int> ans = ob.find(l, b, h);
		for(auto i: ans)cout << i <<" ";
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends