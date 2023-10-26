//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
    int isReversible(string str, int n) { 
         int i = 0, j = str.length()-1; 
         while (i < j) { 
            if (str[i] != str[j]) 
                return 0; 
            i++; 
            j--; 
         } 
         return 1; 
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution obj;
        cout << obj.isReversible(s, n) << endl;
    }
return 0;
}


// } Driver Code Ends