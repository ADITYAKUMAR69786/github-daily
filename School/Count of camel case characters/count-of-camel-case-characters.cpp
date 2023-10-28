//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:   
    int countCamelCase (string s)
    {
    	//code here.
    	int res = 0;
    	// looping through all characters in the string
    	for (int i = 0; i < s.length (); ++i)
    		// checking if a character is uppercase
    		if (s[i] >= 'A' and s[i] <= 'Z')
    			res++;
    
    	return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout <<ob.countCamelCase (s) << '\n';
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends