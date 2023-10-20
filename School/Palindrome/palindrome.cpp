//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    string s="";
			// Store the digits of number in string
			while(n > 0)
			{
				s = s + char((n%10) + '0');
				n /= 10;
			}
			string t = s;
			// reverse the string
			reverse(t.begin(), t.end());
			// Check if equal then palindrome otherwise not.
			if(s == t)
				return "Yes";
			return "No";
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
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends