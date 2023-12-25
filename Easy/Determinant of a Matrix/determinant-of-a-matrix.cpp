//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function for finding determinant of matrix.
    vector<vector<int>> genrate(vector<vector<int>> matrix, int temp, int n) {
    vector<vector<int>> smallerMatrix;
    for (int i = 1; i < n; i++) {
        vector<int> row;
        for (int j = 0; j < n; j++) {
            if (j == temp) continue;
            row.push_back(matrix[i][j]);
        }
        smallerMatrix.push_back(row);
    }
    return smallerMatrix;
}
    
   int solution(vector<vector<int>> matrix, int n) {
    if(n==0) return n;
    if (n == 1) return matrix[0][0];
    if (n == 2) return (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int sub = matrix[0][i] * solution(genrate(matrix, i, n), n - 1);  // Pass n-1 for smaller matrices
        if (i % 2 == 0) {
            ans += sub;
        } else {
            ans -= sub;
        }
    }
    return ans;
}
    
    int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
        return solution(matrix,n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        int result = ob.determinantOfMatrix(matrix, n);
        cout<<result<<endl;
    }
    return 0;
}
// } Driver Code Ends