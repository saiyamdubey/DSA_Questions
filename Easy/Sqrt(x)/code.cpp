#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {             // my code hahahaah
        int i=0;
        while(i*i<x){
            i++;
            if(i*i>x){
                i--;
                break;
            }
        }
        return i;
    }
};
int main(){
    Solution s;
    int num;
    cin>>num;
    int result = s.mySqrt(num);
    cout<<result;
    return 0;
}