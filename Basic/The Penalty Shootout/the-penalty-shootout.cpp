//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int penaltyScore(string S)
	{
	    // Your code goes here
	      int ans = 0;

        //iterating over the string to check for penalty situations.
        for(int i = 1; i < S.size(); i++)
            //if current character is '1' and previous character is '2',
            //we increment the penalty score.
            if(S[i]=='1' and S[i-1]=='2')
                ans++;

        return ans;      
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
   		string S;
   		cin >> S;

   	    Solution ob;

   		cout << ob.penaltyScore(S) << "\n";
   	}

    return 0;
}
// } Driver Code Ends