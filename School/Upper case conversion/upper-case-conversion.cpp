//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



string transform(string s)
{
    // code here
    // Loop through each character of the string.
    for (int i = 0; i < s.length(); ++i)
    {
        // Check if the current character is the first character of the string
        // or if the previous character is a space.
        if(i==0 || s[i-1] == ' ')
            s[i] = toupper(s[i]); // Convert the character to uppercase.
    }
    return s; // Return the transformed string.
}