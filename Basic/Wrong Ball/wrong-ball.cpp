//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int countWrongPlacedBalls(string s);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        cout<<countWrongPlacedBalls(a)<<endl;
        
    }
}

// } Driver Code Ends


int countWrongPlacedBalls(string s)
{
    //code here.
    int c=0,i;
    // traversing whole string.
    for(i=0;i<s.length();i++)
    {
        // conditions are opposite as there is 1 based 
        // indexing as mentioned in question.
        if(i%2!=0)
        {
            if(s[i]=='R')
                c++;
        }
        else
        {
            if(s[i]=='B')
                c++;
        }
    }
    return c;
}
