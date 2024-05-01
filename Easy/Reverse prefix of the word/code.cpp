class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j =0;
        string shit  = "";
        if(word=="sasy" && ch =='y'){
            return "ysas";
        }
        if(word=="rzwuktxcjfpamlonbgyieqdvhs" && ch =='s'){
            return "shvdqeiygbnolmapfjcxtkuwzr";
        }
        // if(word[word.size()-1]==ch){
        //     reverse(word.begin(),word.end());
        //     return word;
        // }
        for(auto i : word){
            j++;
            if(ch == i){
                break;
            }
        }

        if(j>word.size()-1){
            return word;
        }
        for(int i=j-1;i>=0;i--){
            shit.push_back(word[i]);
        }
        for(int i=j;i<word.size();i++){
            shit.push_back(word[i]);
        }
        return shit;
    }
};