//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
        int mWidth = 0;
    int mHeight = 0;
    
    inline bool PrintNumber(int x, int y, vector<int>& result, vector<vector<int>>& matrix)
    {
        if (x < 0 || y >= mHeight) return false;
        
        result.push_back(matrix[y][x]);
        
        return true;
    }

    inline void PrintNumbers(int x, int y, vector<int>& result, vector<vector<int>>& matrix)
    {
        while (1)
        {
            bool next = PrintNumber(x, y, result, matrix);
            
            if (!next) break;
            
            x--; y++;
        }
    }

  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        vector<int> result;

        mWidth = mHeight = matrix.size();
        
        for (int i = 0; i < mWidth; i++)
        {
            PrintNumbers(i, 0, result, matrix);
        }
        
        for (int i = 1; i < mHeight; i++)
        {
            PrintNumbers(mWidth - 1, i, result, matrix);
        }
        
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends