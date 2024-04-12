class Solution {
public:
    int dominantIndex(vector<int>& n) {
        vector<int>copy = n;
        sort(n.begin(),n.end());
        int index;
        for(int i=0;i<copy.size();i++){
            if(n[n.size()-1]==copy[i]){
                index = i;
            }
        }
        if(n[n.size()-2]*2 <= n[n.size()-1]){
            return index;
        }
        return -1;
    }
};