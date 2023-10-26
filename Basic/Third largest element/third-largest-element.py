class Solution:
    def thirdLargest(self,a, n):
        a=sorted(list(set(a)),reverse=True)
        if len(a)<3:
            return -1
        else:
            return a[2]


#{ 
 # Driver Code Starts
# Your code goes here
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        print(Solution().thirdLargest(arr, n))
# } Driver Code Ends