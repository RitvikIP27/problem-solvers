class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //mid se bda right me mtlb uphill
        //mid se chota right me mtlb down hill
        //mid equal mtlb peak
        int start=0;
        int end= nums.size()-1;
        return binary(start,end,nums);
        
    }
    int binary(int start,int end,vector<int>& nums){
        int mid=start+(end-start)/2;
        if(start==end){
            return start;
        }
        
        if(nums[mid]<nums[mid+1]){
            //going uphill
            return binary(mid+1,end,nums);
        }
        else{
            return binary(start,mid,nums);
        }
    }
};