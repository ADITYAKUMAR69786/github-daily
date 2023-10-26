# Function should return an integer value
def convertFive(n):
    f=""
    N = str(n)
    for i in N:
        if i=="0":
            f = f+"5"
        else:
            f = f+i
    return f


#{ 
 # Driver Code Starts
# Your code goes here
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        print (convertFive(int(input().strip())))
# } Driver Code Ends