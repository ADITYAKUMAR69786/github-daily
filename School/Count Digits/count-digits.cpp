//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int temp = N, count = 0;
        while (temp != 0)
        {
            // extract the last digit
            int d = temp % 10;
            temp /= 10;
             
            // check if d divides N completely and is not zero
            if (d > 0 && N % d == 0)
              count++;
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends