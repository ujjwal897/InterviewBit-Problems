Given a binary tree, find its maximum depth.

The maximum depth of a binary tree is the number of nodes along the longest path from the root node down to the farthest leaf node.

 NOTE : The path has to end on a leaf node. 
Example :

         1
        /
       2
max depth = 2.





/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 * 
 * typedef struct TreeNode treenode;
 * 
 * treenode* treenode_new(int val) {
 *     treenode* node = (treenode *) malloc(sizeof(treenode));
 *     node->val = val;
 *     node->left = NULL;
 *     node->right = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Root pointer of the tree 
 * 
 * @Output Integer
 */
int maxDepth(treenode* A) {
     if(A == NULL)
            return 0;  
        else
            {int leftHeight = 0;  
            int rightHeight = 0;  
            if(A->left != NULL):  
                leftHeight = maxDepth(A->left);  
            if(A->right != NULL):  
                rightHeight = maxDepth(A->right);  
            maximum = leftHeight if (leftHeight > rightHeight) else rightHeight;  
            return (maximum + 1);  }
}
