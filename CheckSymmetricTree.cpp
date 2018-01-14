/**

Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

Example :

    1
   / \
  2   2
 / \ / \
3  4 4  3
The above binary tree is symmetric.
But the following is not:

    1
   / \
  2   2
   \   \
   3    3
Return 0 / 1 ( 0 for false, 1 for true ) for this problem


 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool checkSymmetric(TreeNode* root1, TreeNode* root2){
    if(root1 == NULL && root2 == NULL)
        return true;
    else if(root1 == NULL && root2 != NULL)
        return false;
    else if(root1 != NULL && root2 == NULL)
        return false;

    if(root1->val != root2->val)
        return false;
    else if(checkSymmetric(root1->left, root2->right) &&
                checkSymmetric(root1->left, root2->right))
            return true;
}
int Solution::isSymmetric(TreeNode* A) {
    return checkSymmetric(A, A);
