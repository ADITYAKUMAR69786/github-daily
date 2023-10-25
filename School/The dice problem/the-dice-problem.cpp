//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int oppositeFaceOfDice(int N)
    {
        // Write Your Code here
        switch(N){
            case 1:
                return 6;
                break;
            case 2:
                return 5;
                break;
            case 3:
                return 4;
                break;
            case 4:
                return 3;
                break;
            case 5:
                return 2;
                break;  
            case 6:
                return 1;
                break;    
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        int ans  = ob.oppositeFaceOfDice(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends