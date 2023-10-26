//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
long long findDiff(long long n);

int main(){
    long t;
    cin>>t;
    while(t--){
        long long amount;
        cin>>amount;
        cout<<findDiff(amount)<<endl;
    }
    return 0;
}
// } Driver Code Ends


long long findDiff(long long amount){
    //code
    string temp = to_string(amount);
    for(int i=0;i<temp.size();i++){
        if(temp[i]=='6'){
            temp[i]='9';
        }
    }
    long long num = stoll(temp);
    return(num-amount);
}