<<<<<<< HEAD
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
=======
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
>>>>>>> b831a143b880d755a6f493e9f3f30f836a8fb1f5
}