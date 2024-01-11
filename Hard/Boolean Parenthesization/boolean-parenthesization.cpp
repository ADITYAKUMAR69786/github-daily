//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
unordered_map<string,int> mp;
int solve(string s,int i,int j,bool istrue)
{
    if(i>j)
    return false;
    if(i==j)
    {
        if(istrue==true)
            return s[i]=='T';
        else
        return s[i]=='F';
        
    }
    string temp=to_string(i);
    temp.push_back(' ');
    temp.append(to_string(j));
    temp.push_back(' ');
    temp.append(to_string(istrue));
    if(mp.find(temp)!=mp.end())
    return mp[temp];
    int ans=0;
    for(int k=i+1;k<j;k=k+2)
    {
        int lt=solve(s,i,k-1,true);
        int lf=solve(s,i,k-1,false);
        int rt=solve(s,k+1,j,true);
        int rf=solve(s,k+1,j,false);
      if(s[k]=='&')
      {
          if(istrue==true)
          ans=ans+lt*rt;
          else
          ans=ans+(lt*rf+lf*rt+lf*rf);
      }
      if(s[k]=='|')
      {
          if(istrue==true)
          ans+=(lt*rf+lf*rt+lt*rt);
          else
          ans+=lf*rf;
      }
      if(s[k]=='^')
      {
          if(istrue==true)
          ans+=lt*rf+lf*rt;
          else
          ans+=lt*rt+lf*rf;
      }
        
    }
    mp[temp]=ans%1003;
    return (mp[temp])%1003;
    
}
    int countWays(int n,string s){
        bool istrue=true;
    int x= solve(s,0,n-1,istrue);
    return (x%1003);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends