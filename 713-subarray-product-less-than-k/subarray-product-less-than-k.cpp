class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       int i = 0, j = 0, res = 0, product = 1, count = 0;
       int n = nums.size();
       while(j<nums.size()){
        product = product*nums[j];
        while(product >= k && i<=j){
            product = product/nums[i];
            i++;
        }
        count = count + (j-i+1);
        j++;
       } 
       return count;
    }
};