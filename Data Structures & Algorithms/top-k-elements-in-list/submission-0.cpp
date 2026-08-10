class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mapp;
        for(int i=0;i<nums.size();i++){
            mapp[nums[i]]++;
        }
        // freq map done, now bucket by frequency
        vector<vector<int>> buckets(nums.size() + 1);
        for(auto& [num, freq] : mapp){
            buckets[freq].push_back(num);
        }

        vector<int> result;
        for(int freq = nums.size(); freq > 0 && (int)result.size() < k; freq--){
            for(int num : buckets[freq]){
                result.push_back(num);
                if((int)result.size() == k) break;
            }
        }
        return result;
    }
};