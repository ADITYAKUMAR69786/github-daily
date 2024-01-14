//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool isPowerofTwo(long long n) {
        if (n <= 0) {
            return false;
        }
        // If a number is a power of 2, it has only one set bit in its binary representation.
        // For example, 8 (1000 in binary) is a power of 2.
        // So, if (n & (n - 1)) is 0, then n is a power of 2.
        return (n & (n - 1)) == 0;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}

// } Driver Code Ends