class Solution {
public:
    int climbStairs(int n) {
//         
   if(n <= 2){
            return n;
        }
        int i = 1, j = 2, temp;
        for(int k = 3; k <= n; k++) {
            temp = i;
            i = j;
            j += temp;
        }
        return j;
    }
};