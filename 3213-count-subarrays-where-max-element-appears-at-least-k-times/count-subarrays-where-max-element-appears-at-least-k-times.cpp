class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int i = 0, j = 0;
        long long res = 0;
        int n = nums.size();
        unordered_map<int,int> m;
        int max_value = *max_element(nums.begin(),nums.end()); // function that gives max element in an array

        while(j<nums.size()){
            m[nums[j]]++; //insertion of element take place here
            while(m[max_value] >= k){
                res = res + (n-j);
                m[nums[i]]--;
                i++;
            }
            j++;
        }
        return res;
    }
};