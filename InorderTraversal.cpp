/**

Given a binary tree, return the inorder traversal of its nodes’ values.

Example :
Given binary tree

   1
    \
     2
    /
   3
return [1,3,2].


 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<int> Solution::inorderTraversal(TreeNode* A) {
    stack<TreeNode*> s;
    vector<int> ans;
    while(1){
        while(A){
            s.push(A);
            A = A->left;
        }
        if(s.empty())
            break;

        A = s.top();
        s.pop();
        ans.push_back(A->val);
        A = A->right;
    }
    return ans;
}
