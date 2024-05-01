#User function Template for python3

"""
# Node Class

class node:
    def __init__(self, val):
        self.data = val
        self.next = None

"""

class Solution:
    #Function to reverse a linked list.
    def arrangeCV(self, head):
        # Code hers
        vowel ="aeiou"
        c= ""
        v= ""
        temp = head 
        while temp :
            s= temp.data
            if s in vowel :v += str(s)
            else : c += str(s)
            
            temp= temp.next 
            
        temp = head 
        i = 0 
        while temp and i < len(v):
            temp.data = v[i]
            i+=1
            temp =temp.next 
            
        i = 0 
        while temp :
            temp.data = c[i]
            i+=1
            temp = temp.next 
            
        
        return head 
#{ 
 # Driver Code Starts


# Node Class    
class Node:
    def __init__(self, val):
        self.data = val
        self.next = None

# Linked List Class
class Linked_List:
    def __init__(self):
        self.head = None
        self.tail = None

    def insert(self, val):
        if self.head is None:
            self.head = Node(val)
            self.tail = self.head
        else:
            self.tail.next = Node(val)
            self.tail = self.tail.next

def printList(head):
    tmp = head
    while tmp:
        print(tmp.data, end=' ')
        tmp=tmp.next
    print()

if __name__=='__main__':
    for i in range(int(input())):
        n = int(input())
        arr = [str(x) for x in input().split()]
        
        lis = Linked_List()
        for i in arr:
            lis.insert(i)
        
        newHead = Solution().arrangeCV(lis.head)
        printList(newHead)

# } Driver Code Ends