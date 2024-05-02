class Solution {
public:
    int maxRepeating(string s, string w) {
        // if(s.size()<w.size()){
        //     return 0;
        // }
        // int count=0;
        // vector<int>p;
        // for(int i=0;i<=s.size()-w.size();){
        //     if(s[i]==w[0]){
        //         string cmp = "";
        //         int j=0,k;
        //         for(j=i,k=0;k<w.size();k++,j++){
        //             cmp = cmp + s[j];
        //         }
        //         if(cmp==w){
        //             p.push_back(i);
        //             count++;
        //         }
        //     }
        //     i++;
        // }
        // for(auto i :p){
        //     cout<<i<<"->";
        // }
        // if(p.size()==0){return 0;}
        // if(p.size()==1){return 1;}
        // int ct = 0;
        // int maxcount=0;
        // int size = p.size()-1;
        // int wsize = w.size();
        // for(int i=0;i<size;i++){
        //     if(p[i+1]-p[i]==wsize){
        //         ct++;
        //     }
        //     else{
        //         ct=0;
        //     }
        //     maxcount = max(ct,maxcount);
        // }
        // return maxcount+1;
        string str = "";
        int sz = w.size();
        int ans = 0;
        string shobhit = w;
        while(true){
            cout<<s<<"->"<<w<<"->"<<ans<<"->"<<s.find(w)<<"\n";
            if(s.find(w)<s.size()&& s.find(w)>=0){
                ans = w.size()/sz;
                w = w + shobhit;
            }
            else{
                break;
            }
        }
        return ans;
        // Esse ye siikha jada dimag na lagao chodulal
        // din kharab chal rahe hai 
    }
};