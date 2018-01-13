/***
Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

 NOTE : The path has to end on a leaf node.
Example :

         1
        /
       2
min depth = 2.


 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int Solution::minDepth(TreeNode* root) {
    if(root == NULL)
        return 0;
    else if (root->left == NULL && root->right == NULL)
        return 1;
    else if(root->left == NULL && root->right != NULL)
        return 1 + minDepth(root->right);
    else if(root->left != NULL && root->right == NULL)
        return 1 + minDepth(root->left);

    return 1 + min(minDepth(root->left), minDepth(root->right));
}
