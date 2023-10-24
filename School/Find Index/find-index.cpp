//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        //code here.
        int start = -1;
        
        //iterating over the array to find the start index of the key.
        for (int i=0; i<n; i++)
        {
            //if current element is equal to the key, update start index
            //and break the loop.
            if (a[i] == key)
            {
                start = i;
                break;
            }
        }
        
        int end = start;
        //iterating over the array from the end to find the end index of the key.
        for (int i=n-1; i>=0; i--)
        {
            //if current element is equal to the key, update end index
            //and break the loop.
            if (a[i] == key)
            {
                end = i;
                break;
            }
        }
        
        //creating a vector to store the start and end index.
        vector<int> ans;
        ans.push_back(start);
        ans.push_back(end);
        return ans; 
    }
  
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends