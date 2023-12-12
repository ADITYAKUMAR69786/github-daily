//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        if(n==1){
            int sum = 0;
            for(int i=0; i < m; i++){
                sum += M[0][i];
            }
            return sum;
        }
        
        if(m==1){
            int max = 0;
            for(int i=0; i<n; i++){
                if(M[i][0] > max){
                    max = M[i][0];
                }
            }
            return max;
        }
        
    
        for(int j=1; j<m; j++){
            for(int i=0; i<n; i++){
                int a=0, b=0, c=0;
                
                if(i > 0){
                   a = M[i-1][j-1]; 
                }
                
                b = M[i][j-1];
                
                if(i+1 < n){
                    c = M[i+1][j-1];
                }
                
                M[i][j] = M[i][j] + max({a, b, c});
            }
        }
        
        int maxgold = 0;
            for(int i=0; i<n; i++){
                if(M[i][m-1] > maxgold){
                    maxgold = M[i][m-1];
                }
            }
            
        return maxgold;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends