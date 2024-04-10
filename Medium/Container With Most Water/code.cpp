class Solution {
public:
    int maxArea(vector<int>& h) {
        int max = 0;
        int i = 0;
        int j = h.size()-1;  
        while(i<=j){
            int area = min(h[i],h[j]) * (j-i);
            if(max < area){
                max = area;
            }
            if(h[i]<h[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return max;
    }
};