#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int i = 0, j = arr.size()-1;
        while(i<=j){
            if(arr[i]==val){
                if(arr[j]==val){
                    j--;
                    continue;
                }else{
                    swap(arr[i], arr[j]);
                    i++;
                }
            }
            else i++;
        }
        return i;
    }
};
int main(){
    Solution s;
    int val=2;
    vector<int> nums = {0,1,2,2,3,0,4,2};       
    int range = s.removeElement(nums,val); 
    for(int i=0;i<range;i++){
        cout<<nums[i]<<" ";
    }
}