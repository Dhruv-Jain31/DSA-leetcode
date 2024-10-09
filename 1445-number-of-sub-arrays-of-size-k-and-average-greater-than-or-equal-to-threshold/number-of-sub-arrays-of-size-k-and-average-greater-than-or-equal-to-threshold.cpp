class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int total_sum = threshold*k;
        int i = 0, j = 0;
        int sum = 0, count = 0;
        while(i < k){
            sum += arr[j];
            j++;
            i++;
        }
        if(sum >= total_sum){
            count++;
        }
        i = k;
        while(i < arr.size()){
            sum = sum - arr[i-k];
            sum = sum + arr[i];
            if(sum >= total_sum){
                count++;
            }
            i++;
        }
        return count;
    }
};