class Solution {
public:
    bool wordPattern(string p, string s) {
        // map<char,string>mp;
        // set<string>st;
        // int j=0;
        // for(auto i : p){
        //     string putkar = "";
        //     for(;s[j]!=' ' && j<s.size();j++){
        //         putkar += s[j];
        //     }
        //     j++;
        //     if(mp[i]=="" && st.find(putkar)){
        //         cout<<putkar<<"\n";
        //         mp[i] = putkar;
        //         s.push(putkar);
        //     }
        //     else if(mp[i]!=putkar){
        //         return false;
        //     }
        // }
        // return true;
        map<char,string> mp;
        set<string>st;
        int j=0;
        for(auto i:p) {
            string putkar="";
            for(;s[j]!=' '&& j<s.size();j++) {
                putkar+=s[j];
            }
            j++;
            if(mp[i]=="" &&st.find(putkar)==st.end()) {
                mp[i]=putkar;
                st.insert(putkar);
            }
            else if(mp[i]!=putkar) {
                return false;
            }
        }
        int countkarow = 0;
        for (char c : s) {
            if (c == ' ') {
                countkarow++;
            }
        }
        cout<<countkarow;
        if(countkarow+1!=p.size()){
            return false;
        }
        return true;
    }
};