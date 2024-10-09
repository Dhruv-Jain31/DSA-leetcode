class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int i = 0, j = 0, cs = 0, len=0, min_length = INT_MAX;
      while(j<nums.size()){
        cs = cs + nums[j];
        j++; 

        while(cs >= target){
            min_length = min(min_length, j-i); //since j++ was done earlier if it is incremented at the end then j-i+1 will be there
            cs = cs - nums[i];
            i++;
        }
      }
      if(i==0){
        return 0;
      }
      return min_length;  
    }
};