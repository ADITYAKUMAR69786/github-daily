//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    void help(int a[],int n,vector<string>&ans,vector<string>&words,int i,string temp){
        if(i>=n){
            ans.push_back(temp);
            return;
        }
        for(int idx=0;idx<words[a[i]-1].size();idx++){
            string s="";
            s.push_back(words[a[i]-1][idx]);
            help(a,n,ans,words,i+1,temp+s);
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        vector<string>words={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        help(a,N,ans,words,0,"");
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends