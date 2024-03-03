// Largest Number formed from an Array


class Solution{
public:
	
	static bool customsort(string a, string b){
	    string ab = a.append(b);
	    string ba = b.append(a);
	    
	    if(ab>ba){
	        return 1;
	    }
	    return 0;
	}
	
	string printLargest(int n, vector<string> &arr) {
	    sort(arr.begin(),arr.end(),customsort);
	    
	    string result = "";
	    for(int i = 0; i < n; i++){
	        result = result + arr[i];
	    }
	    return result;
	}
};