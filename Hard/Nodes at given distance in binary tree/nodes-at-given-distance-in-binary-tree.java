//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class Node  
{ 
    int data; 
    Node left, right; 
   
    public Node(int d)  
    { 
        data = d; 
        left = right = null; 
    } 
}

class GFG
{
    static Node buildTree(String str)
    {
        // Corner Case
        if(str.length() == 0 || str.equals('N'))
            return null;
        String[] s = str.split(" ");
        
        Node root = new Node(Integer.parseInt(s[0]));
        Queue <Node> q = new LinkedList<Node>();
        q.add(root);
        
        // Starting from the second element
        int i = 1;
        while(!q.isEmpty() && i < s.length)
        {
              // Get and remove the front of the queue
              Node currNode = q.remove();
        
              // Get the current node's value from the string
              String currVal = s[i];
        
              // If the left child is not null
              if(!currVal.equals("N")) 
              {
        
                  // Create the left child for the current node
                  currNode.left = new Node(Integer.parseInt(currVal));
        
                  // Push it to the queue
                  q.add(currNode.left);
              }
        
              // For the right child
              i++;
              if(i >= s.length)
                  break;
              currVal = s[i];
        
              // If the right child is not null
              if(!currVal.equals("N")) 
              {
        
                  // Create the right child for the current node
                  currNode.right = new Node(Integer.parseInt(currVal));
        
                  // Push it to the queue
                  q.add(currNode.right);
              }
              
              i++;
        }
    
        return root;
    }
    
    public static void main(String args[]) throws IOException
    {
    
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while(t>0)
        {
            String s = br.readLine().trim();
            Node root = buildTree(s);
            Solution T = new Solution();
            int target = Integer.parseInt(br.readLine().trim());
            int k = Integer.parseInt(br.readLine().trim());
            ArrayList<Integer> res = new ArrayList<Integer>();
            res = T.KDistanceNodes(root,target,k);
            for(int i = 0;i<res.size();i++)
                System.out.print(res.get(i) + " ");
            System.out.println();    
            t--;
        }
    }
}

// } Driver Code Ends


//User function Template for Java

// class Node  
// { 
//     int data; 
//     Node left, right;
// }
class Solution
{
    public static ArrayList<Integer> KDistanceNodes(Node root, int target , int k)
    {
        ArrayList<Integer> al = new ArrayList<>();
        HashMap<Integer, Node> parent = new HashMap<>();
        Queue<Node> queue = new LinkedList<>();
        
        queue.offer(root);
        
        while(!queue.isEmpty()){
            int size = queue.size();
            
            while(size-->0){
                Node cur = queue.poll();
                if(cur.left!=null){
                    parent.put(cur.left.data, cur);
                    queue.offer(cur.left);
                }
                if(cur.right!=null){
                    parent.put(cur.right.data, cur);
                    queue.offer(cur.right);
                }
            }
        }
        
        Node targetNode = find(root, target);

        if(targetNode == null)return al;
        
        queue.offer(targetNode);
        HashMap<Integer, Boolean> vis = new HashMap<>();
        
        while(k>0 && !queue.isEmpty()){
            int size = queue.size();
            while(size-->0){
                Node cur = queue.poll();
                vis.put(cur.data, true);
                if(cur.left!=null && !vis.containsKey(cur.left.data)){
                    queue.offer(cur.left);
                }
                if(cur.right!=null && !vis.containsKey(cur.right.data)){
                    queue.offer(cur.right);
                }
                if(parent.containsKey(cur.data) && !vis.containsKey(parent.get(cur.data).data)){
                    queue.offer(parent.get(cur.data));
                }
            }
            k--;
        }
        
        while(!queue.isEmpty()){
            al.add(queue.poll().data);
        }
        Collections.sort(al);
        return al;
    }
    
    static Node find(Node root, int target){
        if(root == null || root.data == target)return root;
        
        Node left = find(root.left, target);
        Node right = find(root.right, target);
        
        return left == null ? right : left;
    }
};

