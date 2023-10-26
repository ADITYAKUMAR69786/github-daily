#User function Template for python3

class Solution:
    def UncommonChars(self,A, B):
        A = set(A)
        B = set(B)
        
        a = list(A.difference(B))
        b = list(B.difference(A))
        
        if a+b!=[]:
            return "".join(sorted(a+b))
        else:
            return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())

    for tcs in range(T):
        A = input()
        B = input()
        ob = Solution()
        print(ob.UncommonChars(A, B))

# } Driver Code Ends