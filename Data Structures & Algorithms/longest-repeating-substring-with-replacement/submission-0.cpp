class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> checker;
        int max_freq = 0;
        int l = 0;
        int streak = 0;

        for(int i = 0; i < s.size(); i++) {

            checker[s[i]]++;
            max_freq = max(max_freq, checker[s[i]]);

            int replacement = (i - l + 1) - max_freq;

            if(replacement > k) {
                checker[s[l]]--;
                l++;
            }

            streak = max(streak, i - l + 1);
        }

        return streak;
    }
};
