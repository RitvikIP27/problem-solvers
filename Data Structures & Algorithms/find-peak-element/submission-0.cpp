
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            mp[nums[i]]=i;
        }
        for(auto j:mp){
            if(j.first==maxi){
                return j.second;
            }
        }
        return 0;
        
    }
};