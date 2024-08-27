class Solution {
public:
    char repeatedCharacter(string s) {
        // Esse Simple code to 
        // Atif bhi nahi likh pai ga 
        map<int,int>m;
        for(auto i : s){
            m[i]++;
            if(m[i]==2){
                return i;
            }
        }
        return s[0];
    }
};