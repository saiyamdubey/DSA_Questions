
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