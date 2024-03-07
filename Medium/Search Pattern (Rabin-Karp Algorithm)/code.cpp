public:
        vector <int> search(string pattern, string text)
        {
            vector<int> ans;
            int n = pattern.size();
            int m = text.size();
            for(int i=0;i<=m-n;i++){
                int j;
                for(j=0;j<n;j++) {
                    if(text[i+j]==pattern[j])
                        continue;
                    else break;
                }
            if(j==n)
                ans.push_back(1+i);
            }
        return ans;
        }