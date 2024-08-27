class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int>atif;
        int i=0;
        cout<<"fd";
        for(auto i : s){
            atif.push(i);
            i++;
        }
        while(!atif.empty()){
            
            if(atif.size()==1){
                return atif.top();
            }
            int y = atif.top();
            atif.pop();
            int x = atif.top();
            atif.pop();
            if(x!=y){
                atif.push(y-x);
            }
        }
        return 0;
    }
};