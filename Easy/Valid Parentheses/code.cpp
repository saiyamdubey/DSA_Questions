#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int length = s.length();
        for(int i=0;i<length;i++){
            char c = s[i];
            if(st.empty()){
                st.push(c);
                continue;
            }
            if(c=='('||c=='{'||c=='['){
                st.push(c);
            }
            else if(c==')'||c=='}'||c==']'){
                if(c==')'&&st.top()=='('){
                    st.pop();
                }
                else if(c=='}'&&st.top()=='{'){
                    st.pop();
                }
                else if(c==']'&&st.top()=='['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }   
};
int main(){
    Solution s;
    if(s.isValid("(])")){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}