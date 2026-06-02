#include <iostream>
#include <vector>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    int n = nums.size();

    long long windowSum = 0;

    // First window
    for (int i = 0; i < k; i++) {
        windowSum += nums[i];
    }

    long long maxSum = windowSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        windowSum += nums[i] - nums[i - k];
        maxSum = max(maxSum, windowSum);
    }

    return (double)maxSum / k;
}

int main() {
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    cout << "Maximum Average = " << findMaxAverage(nums, k);

    return 0;
}
