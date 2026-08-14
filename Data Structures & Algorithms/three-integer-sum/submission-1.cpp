class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //first run did nto handly duplicacy
        sort(nums.begin(),nums.end());
        vector<vector<int>> final_result;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;//bcz using this element triplet was once processed
            }
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                if(nums[j]+nums[k]<-nums[i]){
                    j++;
                }
                else if(nums[j]+nums[k]>-nums[i]){
                    k--;
                }
                else{
                    final_result.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                    while(j<k && nums[k]==nums[k+1]){
                        k--;
                    }

                }
            }
        }
        return final_result;
        
    }
};
