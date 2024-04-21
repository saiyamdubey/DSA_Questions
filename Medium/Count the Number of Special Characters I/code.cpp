class Solution {
public:
    int numberOfSpecialChars(string w) {
        // int count=0;
        // map<char,int>l;
        // map<char,int>u;
        int count=0;
        // for(int i=0;i<w.length();i++){
        //     if((int)i>=97){
        //         l[w[i]]++;
        //     }
        //     else {
        //         u[w[i]]++;
        //     }
        // }
        // for (auto i : l) {
        //     count++;
        //     if(u[(int)(i.first)-32]){
        //         count++;
        //     }
        // }
        // return count;
        
        
        
//         unordered_map<char,int> mp;
        
//         for(int i=0; i<w.size(); i++)
//         {
//             mp[w[i]] = i;
//         }
//         int count = 0;
//         int ind = 0;
//         for(auto i : mp)
//         {
//             if( islower(i.first) )
//             {
                
                
//                 for(int j=0;j<w.size(); j++)
//                 {
//                     if( toupper(i.first) == w[j] ){
                        
//                         ind = j;
//                         break;
//                     }
//                 }
//                 if( ind > mp[i.first] )
//                 {
//                     count++;
//                 }
//             }
//         }
        
//         return count;
        
        
        
        
        
        set<char>l;
        set<char>u;
        for(char c:w) {
            if(islower(c)) {
                l.insert(c);
            }
            else{
                u.insert(c);
            }
        }
        for (char c:l) {
            if (u.count(toupper(c))>0) {
                count++;
            }
            // if(u.find(toupper(c)) {
            //     count++;
            // }
            // cout<<u.find(toupper(c));
        }
        return count;
        // int count=0;
        // map<char,int> mp;
//         set<char> st;
//         for( auto i : w)
//         {
//             st.insert(i);
//         }
//         for(auto i : st)
//         {
//             if( isupper(i) )
//             {
//                 mp[i]=1;
//             }
//         }
//         int count = 0;
//         for(auto i : st)
//         {
//             if( islower(i) )
//             {
//                 mp[i]--;
//                 count++;
//             }
            
//         }
        
//         return count;
    }
};