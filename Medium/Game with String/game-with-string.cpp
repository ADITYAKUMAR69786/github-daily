//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
public:

    int minValue(string s, int k){
        // code here
        priority_queue<int> pq;
        unordered_map<char, int> freq;
        for(int i=0; i<s.size(); i++) freq[s[i]]++;
        
        for(auto it : freq)
        {
            pq.push(it.second);
        }
        
        while(k && !pq.empty())
        {
            int top = pq.top();
            top--;
            pq.pop();
            if(top) pq.push(top);
            k--;
        }
        
        int sum = 0;
        while(!pq.empty())
        {
            sum += pow(pq.top(), 2);
            pq.pop();
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends