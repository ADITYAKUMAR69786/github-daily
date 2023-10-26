#User function Template for python3

class Solution:
    def removeConsecutiveCharacter(self, S):
        f=S[0]
        for i in S:
            if i!=f[-1]:
                f = f+i
        return f


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())

    for tcs in range(T):
        s = input()
        ob = Solution()
        print(ob.removeConsecutiveCharacter(s))

# } Driver Code Ends