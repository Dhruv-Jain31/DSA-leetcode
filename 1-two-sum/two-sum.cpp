class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> numMap; // To store the number and its index
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        // Checking if the complement exists in the map
        if (numMap.find(complement) != numMap.end()) {
            // If it exists, returning indices only
            return {numMap[complement], i};
        }
        // else we add the current number and its index to the map
        numMap[nums[i]] = i;
    }
    
    return {};
}
};
        