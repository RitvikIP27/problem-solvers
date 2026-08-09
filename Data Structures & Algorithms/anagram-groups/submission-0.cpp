class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<pair<string, int>> arr;
        
       
        for(int i = 0; i < n; i++){
            string s = strs[i];          // make a copy
            sort(s.begin(), s.end());
            arr.push_back({s, i});       
        }
        
        sort(arr.begin(), arr.end());
        
        vector<vector<string>> result;
        vector<string> current;
        
        for(int i = 0; i < n; i++){
            current.push_back(strs[arr[i].second]);
            if(i == n-1 || arr[i].first != arr[i+1].first){
                result.push_back(current);
                current.clear();
            }
        }
        return result;
    }
};