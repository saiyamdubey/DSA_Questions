<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check_is_prefix(char s,vector<string> strs,int n,int it){
        for(int i=1;i<=n;i++){
            string st = strs[i];
            cout<<s<<" "<<st[it]<<endl;
            if(s!=st[it]){
                return false;
            }
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans="1";
        string str = strs[0];
        int size = strs.size();
        int length = str.length();
        for(int i=0;i<length;i++){
            char s = str[i];
            if(check_is_prefix(s,strs,size,i)){
                ans = ans + s;
                cout<<ans<<endl;
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<string> v = {"saiy","saiyam","sai","sam"};
    string a = s.longestCommonPrefix(v);
    cout<<a<<endl;
=======
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check_is_prefix(char s,vector<string> strs,int n,int it){
        for(int i=1;i<=n;i++){
            string st = strs[i];
            cout<<s<<" "<<st[it]<<endl;
            if(s!=st[it]){
                return false;
            }
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans="1";
        string str = strs[0];
        int size = strs.size();
        int length = str.length();
        for(int i=0;i<length;i++){
            char s = str[i];
            if(check_is_prefix(s,strs,size,i)){
                ans = ans + s;
                cout<<ans<<endl;
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<string> v = {"saiy","saiyam","sai","sam"};
    string a = s.longestCommonPrefix(v);
    cout<<a<<endl;
>>>>>>> b831a143b880d755a6f493e9f3f30f836a8fb1f5
}