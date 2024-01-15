#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long cube(int times){
        long sum=1;
        for(int i=0;i<times-1;i++){ 
            sum=sum*26;
        }
        return sum;
    }
    long titleToNumber(string columnTitle) {
        long answer=0;
        int size=columnTitle.length();
        for(long i=0; i<size;i++){
            int num = columnTitle[i] - 64;
            int t = size-i;
            if(t==0){
                answer = answer + num;
                break;
            }
            else{
                answer = answer + (num * cube(t));
            }
        }
        return answer;
    }
};
int main(){
    Solution s;
    long ans=s.titleToNumber("SAGAR");
    cout<<ans<<endl;
}