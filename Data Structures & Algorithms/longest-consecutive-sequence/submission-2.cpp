class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> store(nums.begin(), nums.end());
        int res = 0;

        for (int num : store) {

            // num is start of sequence
            if (store.find(num - 1) == store.end()) {

                int curr = num;
                int streak = 1;

                while (store.find(curr + 1) != store.end()) {
                    curr++;
                    streak++;
                }

                res = max(res, streak);
            }
        }

        return res;
    }
};