class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int time = helper(piles, mid);

            if (time <= h) {
                // mid works → try a smaller speed
                high = mid - 1;
            }
            else {
                // mid is too slow
                low = mid + 1;
            }
        }

        return low;
    }

    int helper(vector<int>& piles, int speed) {
        int hours = 0;

        for (int pile : piles) {
            hours += pile / speed;

            if (pile % speed != 0) {
                hours++;
            }
        }

        return hours;
    }
};
