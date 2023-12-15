//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		    unsigned int M = 1000000007;
           if(n==1) return 1;


           int a = 1,b=1;
           int c = 0;
           for(int i=2;i<=n;i++){
               c =( a%M + b%M)%M;
               a = b;
               b = c;
           }
           return c%M; 
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends