class Solution {
public:
    int hammingWeight(int n) {
        int m = 0;
        int total = 0;
        while(n!=0){
            m = n%2;
            if(m == 1){
                total += 1;
            }
            n = n/2;
        }

        return total;
    }
};