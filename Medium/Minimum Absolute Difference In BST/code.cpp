class Solution
{
    public:
    // int diff = INT_MAX;
    // void traverse(Node *root){
    //     if(root == NULL){
    //         return ;
    //     }
    //     int a = abs(root->data - root->left-data);
    //     int b = abs(root->data - root->right-data);
    //     if(diff > a){
    //         diff = a;
    //     }
    //     if(diff > b){
    //         diff = b;
    //     }
    //     traverse(root->left);
    //     traverse(root->right);
    // }
    // int absolute_diff(Node *root){
    //     return diff;
    // }
    void dfs(Node *root, vector<int> &diff)
    {
        if(!root) return;
        
        dfs(root->left,diff);
        diff.emplace_back(root->data);
        dfs(root->right,diff);
    }
    
    int absolute_diff(Node *root)
    {
        vector<int> vec;
        dfs(root, vec);
        
        int diff = INT_MAX;
        for(int i = 1; i < vec.size(); i++)
        {
            diff = min(diff, abs(vec[i] - vec[i - 1]));
        }
        return diff;
    }
};