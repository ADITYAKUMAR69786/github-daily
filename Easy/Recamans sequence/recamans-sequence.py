#User function Template for python3

class Solution:
    def recamanSequence(self, n):
        # code here
        arr=[0]*n
        s=set([0])
        for i in range(1,n):
            if arr[i-1]-i >0 and arr[i-1]-i not in s:
                arr[i]=arr[i-1]-i
                s.add(arr[i])
            else:
                arr[i]=arr[i-1]+i
                s.add(arr[i])
        return arr


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        
        ob = Solution()
        ans = ob.recamanSequence(n)
        for i in range(n):
            print(ans[i],end=" ")
        print()
# } Driver Code Ends