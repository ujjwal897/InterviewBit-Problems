Given a binary search tree, write a function to find the kth smallest element in the tree.

Example :

Input : 
  2
 / \
1   3

and k = 2

Return : 2

As 2 is the second smallest element in the tree.
 NOTE : You may assume 1 <= k <= Total number of nodes in BST 





/**
 * Definition for binary tree
 * class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) {
 *      val = x;
 *      left=null;
 *      right=null;
 *     }
 * }
 */
public class Solution {
    public int kthsmallest(TreeNode root, int k) {
    int count = 0;  
    int ksmall = Integer.MIN_VALUE; 
    TreeNode curr = root; 
    while (curr != null)  
    {  
        if (curr.left == null)  
        {  
            count++;  
            if (count==k)  
                ksmall = curr.val;  
            curr = curr.right;  
        }  
        else
        {  
            TreeNode pre = curr.left;  
            while (pre.right != null && pre.right != curr)  
                pre = pre.right;  
            if (pre.right== null)  
            { 
                pre.right = curr;  
                curr = curr.left;  
            }  
            else
            {  
                pre.right = null;  
                count++; 
                if (count==k)  
                    ksmall = curr.val;  
                curr = curr.right;  
            }  
        }  
    }  
    return ksmall;
    }
}
