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

        // LEFT half is sorted
        if (nums[low] <= nums[mid]) {

            // target lies inside sorted left half
            if (nums[low] <= target && target < nums[mid]) {
                return binarySearch(low, mid - 1, nums, target);
            }

            // otherwise target is in right half
            return binarySearch(mid + 1, high, nums, target);
        }

        // RIGHT half is sorted
        else {

            // target lies inside sorted right half
            if (nums[mid] < target && target <= nums[high]) {
                return binarySearch(mid + 1, high, nums, target);
            }

            // otherwise target is in left half
            return binarySearch(low, mid - 1, nums, target);
        }
    }
};
