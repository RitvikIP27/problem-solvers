
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       
        int maxi=0;
        int index=0;
        // Better thna hasmpa SC goes down to 0(1) but tc still O(n)
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                index=i;
            }
            maxi=max(maxi,nums[i]);
            
            
        }
       
        return index;
        
    }
};