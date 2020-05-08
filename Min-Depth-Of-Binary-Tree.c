Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

 NOTE : The path has to end on a leaf node. 
Example :

         1
        /
       2
min depth = 2.





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
int minDepth(treenode* A) {
    if (A == NULL) 
        return 0; 
  
    // Base case : Leaf Node. This accounts for height = 1. 
    if (A->left == NULL && A->right == NULL) 
    return 1; 
  
    // If left subtree is NULL, recur for right subtree 
    if (!A->left) 
    return minDepth(A->right) + 1; 
  
    // If right subtree is NULL, recur for left subtree 
    if (!A->right) 
    return minDepth(A->left) + 1; 
    int min=minDepth(A->left)>minDepth(A->right)?minDepth(A->left):minDepth(A->right);
    return min + 1; 
}
