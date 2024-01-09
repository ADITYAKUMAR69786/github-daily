//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            vector<int>res;
            int n = txt.size();
            int m = pat.size();
            for(int i=0;i<n;i++){
                int z = i;
                for(int j=0;j<m;j++){
                    if(txt[z]==pat[j]){
                        z++;
                    }
                    else{
                        break;
                    }
                }
                if(z-i==m){
                    res.push_back(i+1);
                }
            }
            return res;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends