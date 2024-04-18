
class Solution {
public:
void inorder(TreeNode* root,string &s)
{
    if( root == NULL )
    {
        s=s+"atif";
        return ;
    }
    s+=to_string(root->val);
    inorder(root->left,s);
    inorder(root->right,s);
}

    bool isSameTree(TreeNode* p, TreeNode* q) {
        string s1;
        inorder(p,s1);
        string s2;
        inorder(q,s2);
        cout<<s1<<"\n"<<s2;
        return s1 == s2;
    }
};


// class Solution {
// 	public:
// 		void preorder(TreeNode* Node, vector<int>&V){
// 			if(Node==NULL){
// 				V.push_back(INT_MIN);
// 				return ;
// 			}
// 			V.push_back(Node->val);
// 			preorder(Node->left,V);
// 			preorder(Node->right,V);
// 		}

// 		bool isSameTree(TreeNode* p, TreeNode* q) {
// 			vector<int>v1,v2;
// 			preorder(p,v1);
// 			preorder(q,v2);
// 			return v1==v2;
// 		}
// };

// class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         if(p == NULL && q == NULL)
//             return true;
//         if((p == NULL && q != NULL) || (q == NULL && p != NULL))
//             return false;
//         if(p->val != q->val)
//             return false;
//         return (isSameTree(p->right, q->right) && isSameTree(p->left, q->left));
//     }
// };

