#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s;

    for (int num : nums) {
        if (s.find(num) != s.end()) {
            return true;
        }
        s.insert(num);
    }

    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};

    if (containsDuplicate(nums))
        cout << "True";
    else
        cout << "False";

    return 0;
}
