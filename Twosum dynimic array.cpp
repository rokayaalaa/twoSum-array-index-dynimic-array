#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    cout << "you hit the target! " << nums[i] << " and " << nums[j] << "----their index is :" << "[" << i << "]" << "  and  " << "[" << j << "]";
                    return { i,j };
                }
            }
        }
        cout << "sorry there is no match";
        return {};
    }
};
int main() {
    vector<int> nums;
    int n, target;
    cout << "Enter numbers (type -1 to stop):\n";

    while (true) {
        cin >> n;
        if (n == -1) break;
        nums.push_back(n);
    }

    cout << "enter the target " << endl;
    cin >> target;

    Solution s;
    s.twoSum(nums, target);
    return 0;
}
