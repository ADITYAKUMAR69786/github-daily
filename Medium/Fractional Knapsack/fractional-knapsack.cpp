//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        double sum=0;
        vector<pair<double,int>> v;
        for(int i=0;i<n;i++)
        {
           double ratio=double(arr[i].value)/double(arr[i].weight);
           v.push_back({ratio,arr[i].weight});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(W>0)
            {
              if(v[n-1-i].second<=W)
              {
                sum+=v[n-1-i].second*v[n-1-i].first;
                W-=v[n-1-i].second;
              }
              else
              {
                sum+=v[n-1-i].first*W;
                W=0;
              }
            }
            else break;
        }
        return sum;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(6)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends