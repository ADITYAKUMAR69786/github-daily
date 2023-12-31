//{ Driver Code Starts
//Initial Template for Java

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;
class Main {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		
		int T=sc.nextInt();
		sc.nextLine();
		while(T-->0)
		{
		    
		    Solution ob=new Solution();
		    
		    String S=sc.nextLine();
		    
		    ArrayList<String> arr = ob.permutation(S);
		    for(String s : arr){
		        System.out.print(s+" ");
		    }
		    System.out.println();
		}
		
	}
}

// } Driver Code Ends


//User function Template for Java


class Solution
{
    ArrayList<String> answer=new ArrayList<>();
    public ArrayList<String> permutation(String s)
    {
        //Your code here
        boolean[] freq=new boolean[s.length()];
        trace(new StringBuffer(),s,freq);
        Collections.sort(answer);
        return answer;
    }
public void trace(StringBuffer sb,String s,boolean[] freq)   {
    if(sb.length()==s.length()){
        answer.add(sb.toString());
        return;
    }
    for(int i=0;i<s.length();i++){
        if(!freq[i]){
            sb.append(s.charAt(i));
            freq[i]=true;
            trace(sb,s,freq);
            freq[i]=false;
            sb.deleteCharAt(sb.length()-1);
        }
    }
}
}

