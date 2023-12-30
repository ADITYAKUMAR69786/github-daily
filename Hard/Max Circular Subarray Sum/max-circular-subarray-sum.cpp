//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int normalsum(int arr[], int n){
        int maxindex=arr[0], res=arr[0];
        
        for(int i=1;i<n;i++){
            maxindex=max(maxindex+arr[i], arr[i]);
            res=max(maxindex,res);
        }
        return res;
        
        
    }
    int circularSubarraySum(int arr[], int num){
        
        int Nsum=normalsum(arr,num);
        if(Nsum<0) return Nsum;
        int tsum=0, res=0;
        for(int i=0;i<num;i++){
            tsum+=arr[i];
            arr[i]=-arr[i];
        }
        res=tsum+normalsum(arr,num);
        res=max(res,Nsum);
        return res;
    }    
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends