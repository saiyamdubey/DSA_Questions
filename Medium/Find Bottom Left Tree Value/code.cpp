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
    int ans=0;
    void saiyam(TreeNode* root){
        if( root == nullptr ){
            return ;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; i++){
                TreeNode* temp = q.front();
                q.pop();
                if( i == 0 ){
                    ans=temp->val;
                }
                if( temp->left )
                {
                    q.push( temp->left );
                }
                if( temp->right )
                {
                    q.push( temp->right );
                }
            }
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        saiyam(root);
        return ans;
    }
};
