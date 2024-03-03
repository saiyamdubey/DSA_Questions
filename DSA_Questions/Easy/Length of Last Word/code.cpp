#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        if(len==1){
            return 1;
        }
        int count=0;
        for(int i=len-1;i>=0;i--){
            if(s[i]!=' '){
                for(int j=i;j>=0;j--){
                    if(s[j]==' '){
                        return count;
                    }
                    else{
                        count++;
                    }
                }
                return count;
            }
        }
        return count;
    }
};
int main(){
    Solution s;
    cout<<s.lengthOfLastWord("Hello World");
}