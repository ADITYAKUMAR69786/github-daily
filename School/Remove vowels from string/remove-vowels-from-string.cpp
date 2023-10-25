//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	    int n = S.size();
	    int j = 0;

	    //iterating over each character of the string
	    for(int i = 0; i < n; i++)
	    {
	    	//checking if the character is a vowel or not
	    	if(S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u')
	    		S[j++] = S[i]; //if not a vowel, storing it in the new string
	    }

	    //returning the updated string without vowels
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
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s, ch; 

	    getline(cin, s);  
   		
       
   		Solution ob;
   		cout << ob.removeVowels(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends