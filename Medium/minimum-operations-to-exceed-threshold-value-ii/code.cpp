class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        for(auto i : nums){
            pq.push(i);
        }
        int count=0;
        // cout<< pq.top();
        while(!pq.empty()&&pq.top()<k){
        cout<< pq.top()<<"->";
            long long t1 = pq.top();
            pq.pop();
            long long t2 = pq.top();
            pq.pop();
            pq.push(t1*2+t2);
            count++;
        }
        return count;
    }
};