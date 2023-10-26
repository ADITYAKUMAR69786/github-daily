//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string magicalString(string S){
        // code here 
        string b = "abcdefghijklmnopqrstuvwxyz";
        int len = S.size();
        string ans = "";
        
        // Iterating over each character of the given string
        for(int i=0; i<len; i++){
            // Finding the position of the character in the magical string
            int d = (S[i]-'a');
            // Appending the corresponding character from the magical string to the answer string
            ans += b[25-d];
        }
        // Returning the magical string
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.magicalString(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends