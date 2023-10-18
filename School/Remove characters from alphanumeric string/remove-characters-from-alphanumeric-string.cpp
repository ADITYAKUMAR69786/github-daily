//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	string removeCharacters(string S) 
	{
	    // Your code goes here
	    int j = 0;

		//iterating over each character in the string.
		for(int i = 0; i < S.size(); i++)
		{
			//checking if the current character is a digit.
			if('0' <= S[i] and S[i] <= '9')
				S[j++] = S[i]; //storing the digit at the current index j.
		}

		//returning the substring of the modified string without non-numeric characters.
		return S.substr(0, j);
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		Solution ob;
   		cout << ob.removeCharacters(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends