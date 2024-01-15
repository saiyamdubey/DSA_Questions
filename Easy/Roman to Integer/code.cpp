<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long romanToInt(string s) {
        long long sum=0;
        map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int size = s.length();
        for(int i=0;i<size;i++){
            char curr = s[i];
            char next = s[i+1];
            auto itc = mp.find(curr);
            auto itn = mp.find(next);
            int num1 = itc->second;
            int num2 = itn->second;
            int size = s.size();
            if(i!=size -1){
                if(num1<num2){
                    sum=sum-mp[s[i]];
                }
                else {
                    sum=sum+mp[s[i]];
                }
            }
            else{
                sum=sum+mp[s[i]];
            }
        }
        return sum;
    }
};
int main(){
    Solution s;
    string str="M";
    long long ans = s.romanToInt(str);
    cout<<ans;
}
=======
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long romanToInt(string s) {
        long long sum=0;
        map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int size = s.length();
        for(int i=0;i<size;i++){
            char curr = s[i];
            char next = s[i+1];
            auto itc = mp.find(curr);
            auto itn = mp.find(next);
            int num1 = itc->second;
            int num2 = itn->second;
            int size = s.size();
            if(i!=size -1){
                if(num1<num2){
                    sum=sum-mp[s[i]];
                }
                else {
                    sum=sum+mp[s[i]];
                }
            }
            else{
                sum=sum+mp[s[i]];
            }
        }
        return sum;
    }
};
int main(){
    Solution s;
    string str="M";
    long long ans = s.romanToInt(str);
    cout<<ans;
}
>>>>>>> b831a143b880d755a6f493e9f3f30f836a8fb1f5
