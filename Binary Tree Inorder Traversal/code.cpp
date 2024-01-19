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

// iterative code important 
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root) return {};
        stack<TreeNode*> st;
        vector<int> ans;
        TreeNode* current = root;

        while(current || !st.empty())
        {
            if(!current) 
            {
                ans.push_back(st.top()->val);
                current = st.top()->right;
                st.pop();
            }
            else 
            {
                st.push(current);
                current = current->left;
            }
        }

        return ans;
    }
};