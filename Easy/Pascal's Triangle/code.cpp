class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> arr(n);
        for (int i = 0; i < n; i++) {
            arr[i] = vector<int>(i + 1);
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    arr[i][j] = 1;
                } else {
                    int ele = arr[i - 1][j - 1] + arr[i - 1][j];
                    arr[i][j] = ele;
                }
            }
        }
        return arr;
    }
};

// class Solution {
// public:
//     vector<vector<int>> generate(int n) {
//         vector<vector<int>> ans;
//         for(int i=0;i<n;i++){
//             vector<int> singleRow(i+1,1);
//             for(int j=1;j<i;j++){
//                 singleRow[j]=ans[i-1][j]+ans[i-1][j-1];
//             }
//             ans.push_back(singleRow);
//         }
//         return ans;
//     }
// };