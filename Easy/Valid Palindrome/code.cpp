class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        for(int i=0;i<s.length();i++){
            if((s[i]>='A'&&s[i]<='Z')|| (s[i]>='a' && s[i]<='z') ||
                (s[i]>='0' && s[i]<='9') ) { 
                p += tolower(s[i]);
            }
        }
        cout<<p<< " ";
        if(p.length()==1)return true;
        for(int i=0;i<p.length();i++){
            if(p[i]!=p[p.length()-1-i]){
                return false;
            }
        }
        return true;
    }
};