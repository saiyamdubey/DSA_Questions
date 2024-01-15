class Solution {
public:
    int searchInsert(vector<int>& n, int t) {
        int s =0, e = n.size()-1, mid = s+(e-s)/2;
        while(s<=e){
            mid = s+ (e - s)/2;
            if(n[mid]==t){
                return mid;
            }
            else if(n[mid]<t){
                s = mid +1;
            }
            else if(n[mid]>t){
                e = mid - 1;
            }
        }
        return s;
    }
};
