#User function Template for python3

class Solution:
    def lastIndex(self, s):
        j=-1
        for i in range(len(s)):
            if s[i]=="1":
                j=i
        return j
        



#{ 
 # Driver Code Starts
#Initial Template for Python 3


def main():

    T = int(input())

    while(T > 0):
    	s = input()
    	ob = Solution()
    	print(ob.lastIndex(s))
    	
    	T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends