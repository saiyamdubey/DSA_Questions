#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        int climbprev[n];          // using dp my first code 
        climbprev[0]=1;             // starting dp thiks in life
        climbprev[1]=1;
        for(int i=2;i<=n;i++){
            climbprev[i] = climbprev[i-1]+climbprev[i-2];
        }
        return climbprev[n];
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    int result = s.climbStairs(n);
    cout<<result;
}