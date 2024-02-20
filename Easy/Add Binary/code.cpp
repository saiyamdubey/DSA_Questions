#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int binarytoint(string str){
        int ans = 0;
        int var = 1;
        for(int i=str.length()-1;i>=0;i--){
            if(str[i]=='1'){
                ans = var + ans;
            }
            var = var * 2;
        }
        return ans;
    }
    string inttobinary(int n){      // 21 10101
        string result = "";
        while(n>=1){
            int rem = n%2;
            if(rem==1){
                result = result + "1";
            }
            else if(rem==0){
                result = result + "0";
            }
            n = n/2;
        }
        string rev="";
        for(int i=result.length()-1;i>=0;i--){
            rev = rev + result[i];
        }
        return rev;
    }
    string addBinary(string a, string b) {
        int num1 = binarytoint(a);
        int num2 = binarytoint(b);
        int num3 = num1 + num2;
        string ans = inttobinary(num3);
        return ans;
    }
};
int main(){
    Solution s;
    string s1="101";
    string s2="11";
    string s3=s.addBinary(s1,s2);
    cout<<s3;
}