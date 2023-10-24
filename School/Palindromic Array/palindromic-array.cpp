//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
        int check(int a)
    {   
        int m=a;
    	int rev=0;
    	while(a!=0)
    	{   
    	    // Reversing the number
    		rev=(rev*10)+(a%10);
    		a/=10;
    	}
    	if(m==rev)
    		return 1;
    	return 0;
    }
    
    // Function to check if all elements in the array are palindromes
    int PalinArray(int a[], int n)
    {
    	int count=0;
    	for(int i=0;i<n;i++)
    	{
    		// Checking if the element is a palindrome
    		if(check(a[i])==1)
    			count++;
    	}
    	// If all elements are palindromes, return 1
    	if(count==n)
    		return 1;
    	return 0;
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
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends