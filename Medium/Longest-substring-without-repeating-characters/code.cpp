class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int m = 0; 
        unordered_set<char> s;
        int l = 0;
        int n = str.length();
        
        for(int r = 0; r < n; r++){
            if(s.count(str[r])==0){
                s.insert(str[r]);
                m = max(m, r - l + 1);
            }
            else{
                while(str[l] != str[r]){
                    s.erase(str[l]);
                    l++;
                }
                l++;
            }
        }
        return m;
    }
};