class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        for(auto i : arr){
            m[i]++;
        }
        set<int>s;
        for(auto i : m){
            int cs = s.size();
            s.insert(i.second);
            if(cs==s.size()){
                return false;
            }
        }
        return true;
    }
};