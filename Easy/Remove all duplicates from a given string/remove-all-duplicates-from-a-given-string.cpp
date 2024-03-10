//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	    string removeDuplicates(string str) {
        // code here
        map<char,int> mp;
       // cout<<mp['t']<<" ";
        string t;
        for(int i=0;i<str.size();i++){
            if(mp[str[i]]){
                continue;
            }
            else{
                mp[str[i]]=i+1;
                t+=str[i];
            }
        }
       // string t;
        return t;
       
    }


};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends