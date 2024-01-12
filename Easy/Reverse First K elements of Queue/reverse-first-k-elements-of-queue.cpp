//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    queue<int> modifyQueue(queue<int> q, int k) {
        
        vector<int>v;
        queue<int>q1;
        for(int i=0;i<k;i++)
        {
            v.push_back(q.front());
            q.pop();
        }
        reverse(v.begin(),v.end());
        vector<int>s;
        while(!q.empty())
        {
            s.push_back(q.front());
            q.pop();
        }
        
        for(int i=0;i<v.size();i++)
        {
            q1.push(v[i]);
        }
       for(int j=0;j<s.size();j++)
        {
           q1.push(s[j]);
              
        } 
       return q1; 
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends