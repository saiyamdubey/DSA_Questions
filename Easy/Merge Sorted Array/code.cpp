#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(int* nums1, int m, int* nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};
int main(){
    int num1[] = {1,2,3,0,0,0};
    int num2[] = {2,5,6};
    merge(num1,3,num2,3);
    return 0;
}