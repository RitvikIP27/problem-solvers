class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0){
            return 0;
        }
        unordered_set<char> checker;
        int i = 0;
        int j = 0;
        int maxque = 0;

        while(j < s.size()) {
            if(checker.find(s[j]) == checker.end()) {
                // character nhi to expand
                checker.insert(s[j]);
                j++;

                maxque = max(maxque, j - i);
            }
            else {
                // duplicate mtlb shrink window
                checker.erase(s[i]);
                i++;
            }
        }
//mistake was chekcing if else opposite always test first remove later
        return maxque;
    }
};