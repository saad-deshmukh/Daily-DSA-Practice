#include <iostream>
#include <vector>
#include <algorithm>

int minJumps(std::vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return 0; // If we are already at the last index, no jumps are needed.

    int jumps = 0;
    int current_end = 0;
    int farthest = 0;

    // Traverse through the array
    for (int i = 0; i < n - 1; ++i) {
        farthest = std::max(farthest, i + nums[i]); // Update the farthest we can reach

        // If we reach the end of the current jump range
        if (i == current_end) {
            ++jumps;  
           std :: cout << "jumps"<< current_end;    // Increment the jump count
            current_end = farthest; // Update the current range end

            // If the current_end has reached or exceeded the last index
            if (current_end >= n - 1) {
                break;
            }
        }
    }

    return jumps;
}

int main() {
    std::vector<int> nums = {2, 3, 1, 1, 4,7,2,4,1,6,3,6,4,6,4,7,34434,23231,746353,143456,4};
    std::cout << "Minimum number of jumps: " << minJumps(nums) << std::endl;
    return 0;
}
