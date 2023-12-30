//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    long long getSubstringWithEqual012(string str) {
        map<pair<long long,long long>,long long>ump;
        ump[{0,0}]=1;
        long long z=0,o=0,t=0;
        long long c=0;
        for(auto x:str)
        {
            if(x=='0')
            z++;
            else if(x=='1')
            o++;
            else if(x=='2')
            t++;
            
            int od=o-z,td=o-t;
            if(ump.find({od,td})!=ump.end())
            c+=ump[{od,td}];
            
            ump[{od,td}]++;
        }
        return c;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.getSubstringWithEqual012(s)<<endl;
	}
    return 0;
}

// } Driver Code Ends