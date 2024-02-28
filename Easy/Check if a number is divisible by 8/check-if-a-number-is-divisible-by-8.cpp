//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
         if(s.size()<3)
        {    
            int x=stoi(s);
            if(x%8==0)
            return 1;
            else
            return -1; 
        }
        else
        {
            int a=stoi(s.substr(s.size()-3,3));
            if(a%8==0)
            return 1;
            else
            return -1;
        }
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
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends