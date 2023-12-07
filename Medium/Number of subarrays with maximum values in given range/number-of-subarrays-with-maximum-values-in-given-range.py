#User function Template for python3

class Solution:
    def countSubarrays(self, a,n,L,R): 
        # Complete the function
        i = 0
        j = 0
        count = 0
        m = 0
        while j < len(a):
            if a[j] > R:
                m = 0
                i = j+1
            elif a[j] <=R and a[j] >= L:
                m = j-i+1
                count = count + m
            elif a[j] < L:
                count = count + m
            j = j + 1
        return count


#{ 
 # Driver Code Starts
#Initial Template for Python 3



for _ in range(0,int(input())):
    n,l,r = map(int, input().strip().split())
    arr = list(map(int,input().strip().split()))
    ob = Solution()
    v = ob.countSubarrays(arr, n, l, r)
    print(v)
    
# } Driver Code Ends