class Solution {
public:
    vector<vector<int>> ans;
    void callgayi(vector<int>jooayii,int i,vector<int>& num){
        if(i==num.size()){
            ans.push_back(jooayii);
            return ;
        }
        vector<int>jooayii2(jooayii.begin(),jooayii.end());
        jooayii2.push_back(num[i]);
        callgayi(jooayii,i+1,num);
        callgayi(jooayii2,i+1,num);
        return ;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>jogaya;
        callgayi(jogaya,0,nums);
        return ans;
    }
    // atif bhai khud se kiya 
};