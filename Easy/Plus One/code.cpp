<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& d) {  
        vector<int> ans;
        int sum = 0;
        bool check=true;
        for(int i=0;i<d.size();i++){
            if(d[i]!=9){
                check=false;
                break;
            } 
        }
        if(check){
            ans.push_back(1);
            for(int i=0;i<d.size();i++){
                ans.push_back(0);
            }
        }
        else{
            int i=d.size()-1;              
            while(d[i]==9){
                d[i]=0;
                i--;
            }
            d[i]=d[i]+1;
            return d;
        }
        
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> d = {1};
    vector<int> a = s.plusOne(d);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& d) {  
        vector<int> ans;
        int sum = 0;
        bool check=true;
        for(int i=0;i<d.size();i++){
            if(d[i]!=9){
                check=false;
                break;
            } 
        }
        if(check){
            ans.push_back(1);
            for(int i=0;i<d.size();i++){
                ans.push_back(0);
            }
        }
        else{
            int i=d.size()-1;              
            while(d[i]==9){
                d[i]=0;
                i--;
            }
            d[i]=d[i]+1;
            return d;
        }
        
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> d = {1};
    vector<int> a = s.plusOne(d);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
>>>>>>> b831a143b880d755a6f493e9f3f30f836a8fb1f5
}