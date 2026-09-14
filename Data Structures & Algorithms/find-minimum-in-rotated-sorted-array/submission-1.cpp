class Solution {
public:
    int findMin(vector<int> &nums) {
        int low =0;
        int high=nums.size()-1;
        int mini=INT_MAX;

        return binarysearch(low,high,nums,mini);
        
    }
    int binarysearch(int low,int high,vector<int> nums,int& mini){
        if(nums[low]<=nums[high]){
            return nums[low];
        }
        if(low>high){
            return mini;
        }
        if(low==high){
            mini=min(mini,nums[low]);
            return mini;
        }

        int mid=low+(high-low)/2;
        if(nums[low]<=nums[mid]){
            //sorted left half
            mini=min(mini,nums[low]);
            return binarysearch(mid+1,high,nums,mini);//other half called again

        }
        //now in case not sorted left half
        else{
            mini=min(mini,nums[mid]);
            //sorted right alf now move to left to check
            return binarysearch(low,mid,nums,mini);

        }
    }
};
