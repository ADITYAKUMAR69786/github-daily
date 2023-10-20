//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        int n = s.length ();
        int i = 0, itr = 0;
        
        // Iterate through the string
        while (i < n)
        {
            // Check if current character is not a space
            if (s[i] != ' ')
                // Copy the non-space character to the new string
                s[itr++] = s[i];
            i++;
        }
        
        // Return only the modified part of the string without any extra characters
        return s.substr (0, itr);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends