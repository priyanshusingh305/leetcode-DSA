class Solution {
public:
    bool judgeSquareSum(int c) {
        int l=0;
        long long int r= sqrt(c);
        while(l<=r){
          long long int temp =l*l+r*r;
            if(temp==c)
                return true;
            else{
                if (temp>c)
                    r--;
                else
                    l++;
            }
        }
        return false;
    }
};