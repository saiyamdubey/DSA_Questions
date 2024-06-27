class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        int maxlen=0;
        int start=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                if(st.empty()){
                    start=i+1;
                }
                else{
                    st.pop();
                    if(st.empty()){
                        maxlen=max(maxlen,i-start+1);
                    } 
                    else{
                        maxlen=max(maxlen,i-st.top());
                    }
                }
            }
        }
        
        return maxlen;
    }
};