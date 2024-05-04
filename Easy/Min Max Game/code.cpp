class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        while(nums.size()!=1){
            vector<int>shit;
            if(nums.size()==1){
                return nums[0];
            }
            int p=0;
            for(int i=0;i<nums.size();){
                if(p==0){   
                    shit.push_back(min(nums[i],nums[i+1]));  
                }
                else if(p==1){   
                    shit.push_back(max(nums[i],nums[i+1]));  
                }
                else if(p%2==0){
                    shit.push_back(min(nums[i],nums[i+1]));
                }
                else if(p%2!=0){
                    shit.push_back(max(nums[i],nums[i+1]));
                }
                i=i+2;
                p++;
            }
            nums.clear();
            for(auto i : shit){
                cout<<i<<"->";
            }cout<<"\n";
            nums = shit;
        }
        return nums[0];
    }
};