//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    long long getMaxArea(long long arr[], int n)
    {
        vector<long long> ps(n,0);
        vector<long long> ns(n,0);
        stack<int>s;
        s.push(0);
        long long res=0;
        
        for(int i=0;i<n;i++){
           while(s.empty()==false && arr[s.top()]>=arr[i]){
                s.pop();
            }
            
            long long pse=s.empty()? -1:s.top();
            ps[i]=pse;
            s.push(i);
        }
        while(s.empty()==false){
            s.pop();
        }
        s.push(n-1);
        for(int i=n-1;i>=0;i--){
            while(s.empty()==false && arr[s.top()]>=arr[i]){
                s.pop();
            }
            long long nse=s.empty()? n:s.top();
            ns[i]=nse;
            s.push(i);
        }
        for(int i=0;i<n;i++){
            long long curr=arr[i];
            curr += (i-ps[i]-1)*arr[i];
            curr += (ns[i]-i-1)*arr[i];
            res= (curr>=res)? curr:res;
        }
        return res;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends