class Solution {
public:

    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        return binarySearch(low, high, nums, target);
    }

    int binarySearch(int low, int high, vector<int>& nums, int target) {

        if (low > high) {
            return -1;
        }

        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid;
        }
//KEY mistake is difference in logic like if sorted then CHEKC no if SORTED AND LESS 
//then take the part else if sorted and greater then the rightr if either is not ture then call the other
        // LEFT half is sorted
        if (nums[low] <= nums[mid]) {

            // target lies inside sorted left half
            if (nums[low] <= target && target < nums[mid]) {//target between
                return binarySearch(low, mid - 1, nums, target);
            }

            // otherwise target is in right half
            return binarySearch(mid + 1, high, nums, target);
        }

        // RIGHT half is sorted
        else {

            // target lies inside sorted right half
            if (nums[mid] < target && target <= nums[high]) {//targert between right+
            //assuming that right is sorted (THIS IS IMPORTANT)
                return binarySearch(mid + 1, high, nums, target);
            }

            // otherwise target is in left half
            return binarySearch(low, mid - 1, nums, target);
        }
    }
};
