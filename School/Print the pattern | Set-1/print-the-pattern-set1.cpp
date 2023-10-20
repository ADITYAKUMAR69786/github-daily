//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}
// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
//Your code here
 int i, j, k;
    for(k=0;k<n;k++){
        for(i=n;i>0;i--){
            for(j=0;j<n-k;j++){
                printf("%d ",i);
            }
        }
        printf("$");
    }
}