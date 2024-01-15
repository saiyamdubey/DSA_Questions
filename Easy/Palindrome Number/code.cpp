#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(long long  x) {
        long long reverse=0;
        long long temp = x;
        long long rem;
        while(temp>0){
            rem = temp % 10;
            reverse = (reverse*10) + rem;
            temp = temp /10;
        }
        if(x==reverse){
            return true;
        }
        else {
            return false;
        }
    }
};
int main(){
    Solution s;
    long long num;
    cin>>num;
    if(s.isPalindrome(num)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}