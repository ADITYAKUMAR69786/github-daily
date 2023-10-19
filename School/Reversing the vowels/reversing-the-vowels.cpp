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
             string vow = "";
            for (int i = 0; i < s.length (); ++i)
            {
                // removing the vowels from s and adding them to the string vow
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                {
                    vow += s[i];
                    s[i] = '.'; // to indicate that the current position is now empty
                }
            }
        
            // traversing s in reverse order and placing the vowels at empty locations
            int i = s.length () - 1;
            int j = 0;
            while (i >= 0)
            {
                if (s[i] == '.') s[i] = vow[j++];
                i--;
            }
            return s;
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
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends