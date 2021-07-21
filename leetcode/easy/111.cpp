/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL){
            return 0;
        }
        int left_min = minDepth(root -> left);
        int right_min = minDepth(root -> right);
        int min;
        if (left_min == 0 || right_min == 0){
            if (left_min == 0){
                min = right_min;
            } else {
                min = left_min;
            }
        } else {
            if(left_min < right_min){
                min = left_min;
            } else {
                min = right_min;
            }
        }
        return min + 1;
    }
};
