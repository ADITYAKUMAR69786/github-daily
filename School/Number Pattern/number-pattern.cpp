//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    string int_to_string(int x){
        string ans;
        //Loop until x becomes 0.
        while(x){
            //Appending the last digit of x to the ans string.
            ans.push_back(char(x%10)+'0');
            //Removing the last digit from x.
            x/=10;
        }
        //Reversing the ans string to get the correct order.
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
    //Function to generate number patterns.
    vector<string> numberPattern(int N)
    {
        vector<string> res;
        //Iterating from 1 to N.
        for(int i = 1 ; i <= N ; i++){
            
            string temp;
            
            //Appending numbers from 1 to i in increasing order.
            for(int j = 1 ; j <= i ; j++){
                temp+=int_to_string(j);
            }
            
            //Appending numbers from i-1 to 1 in decreasing order.
            for(int j = i-1 ; j >= 1 ; j--){
                temp+=int_to_string(j);
            }
            
            //Adding the generated pattern to the result vector.
            res.push_back(temp);
        }
        //Returning the generated number patterns.
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
        int N;
        cin>>N;
       
        Solution ob;
        vector<string> res = ob.numberPattern(N);
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    
    }
    return 0;
}
// } Driver Code Ends