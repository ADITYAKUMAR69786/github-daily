//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    if(n)
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    else cout<< " ";
}


// } Driver Code Ends
/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution
{
    public:
     void fun(Node* head,unordered_map<int,int> &um){
        if(head==NULL)
            return;
        um[head->data]++;
        fun(head->next,um);
        return;
        
    }
    
    
    Node* findIntersection(Node* head1, Node* head2)
    {
        unordered_map<int,int> um1;
        unordered_map<int,int> um2;
        fun(head1,um1);
        fun(head2,um2);
        
        map<int,int> mp;
        for(auto xx:um1){
            
                mp[xx.first]=xx.second;

            // cout<<xx.first<<" "<<mp[xx.first]<<endl;
        }
        // cout<<"\n\n";
        for(auto xx:um2){
            if(mp[xx.first] > xx.second)
                mp[xx.first]=xx.second;
            // cout<<xx.first<<" "<<mp[xx.first]<<endl;
        }
        // cout<<"\n\n\n";
        
        vector<int> v;
        for(auto cc:mp){
            int t=min(um1[cc.first],um2[cc.first]);
            while(t--){
                v.push_back(cc.first);
            }
            
        }
        Node* p=NULL;
        Node* q=NULL;
        
        for(int i=0;i<v.size();i++){
            if(p==NULL){    
                p=new Node(v[i]);
                q=p;
            }
            else{
                q->next=new Node(v[i]);
                q=q->next;
            }
            
            
            // cout<<v[i]<<" ";
        }
       return(p); 
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Solution ob;
	    Node* result = ob.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends