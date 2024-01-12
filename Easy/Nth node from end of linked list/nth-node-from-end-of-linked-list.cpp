//{ Driver Code Starts
//Initial Template for C++
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/

// } Driver Code Ends
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
        if(head == NULL || n<1){
            return -1;
        }
        else{
            // reverse the list
            Node* prev = nullptr;
            Node* curr = head;
            Node* next = nullptr;
            int count = 1;
            
            while(curr!= nullptr){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                count++;
            }
            
            // Counting from the end
            count = count-1;
            curr = prev;
            if(count < n){  //If the number of nodes are less than n
                return -1;
            }
            
            count = 1;
            while(count < n){
                curr = curr->next;
                count++;
            }
            
            return curr->data;
        }
    }
};



//{ Driver Code Starts.

int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
    cout<<obj.getNthFromLast(head, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends