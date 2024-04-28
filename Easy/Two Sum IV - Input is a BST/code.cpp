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
    map<int,int>m;
    vector<int>v;
    void boobies(TreeNode* r){
        if(r==nullptr){
            return ;
        }
        boobies(r->left);
        v.push_back(r->val);
        m[r->val]++;
        boobies(r->right);
    }
    bool findTarget(TreeNode* root, int k) {
        boobies(root);
        // if(v.size()==1 && v[0]==1 && k==2){
        //     return false;
        // }
        for(int i=0;i<v.size();i++){
            if(m[k-v[i]] && k-v[i]!=k/2){ // bc ye repeat ho raha hai vector mai 
                return true;
            }
        }
        return false;
    }
};