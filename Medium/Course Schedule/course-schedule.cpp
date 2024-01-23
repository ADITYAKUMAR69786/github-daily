//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        vector<int>ans;
        
        vector<int>graph[n];
        for(int i=0;i<m;i++){
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        
        int st = -1;
        vector<int>g(n);
        for(int i=0;i<n;i++){
            for(auto val:graph[i]){
                g[val]++;
            }
        }
        
        for(int i=0;i<n;i++){
            if(g[i]==0){
                st = i;
                break;
            }
        }
        
        if(st==-1){
            return {};
        }
        else{
            vector<int>ans;
            stack<pair<int,int>>s1;
            for(int i=0;i<n;i++){
                if(g[i]==0){
                    s1.push({i,0});
                }
            }
            while(!s1.empty()){
                pair<int,int>p = s1.top();
                s1.pop();
                if(p.second==0){
                    ans.push_back(p.first);
                    for(auto child:graph[p.first]){
                        g[child]--;
                        s1.push({child,g[child]});
                    }
                }
            }
            if(ans.size()<n){
                return {};
            }
            else{
                return ans;
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> prerequisites;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            prerequisites.push_back({u,v});
        }
        
        vector<int> adj[n];
        for (auto pre : prerequisites)
            adj[pre[1]].push_back(pre[0]);
        
        Solution obj;
        vector <int> res = obj.findOrder(n, m, prerequisites);
        if(!res.size())
            cout<<"No Ordering Possible"<<endl;
        else
            cout << check(n, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends