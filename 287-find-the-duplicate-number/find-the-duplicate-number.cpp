class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = 0;
        int x = nums[i];
        while(x!=0){
            i = x;
            x = nums[i];
            nums[i] = 0;
        }
        return i;
    }
};