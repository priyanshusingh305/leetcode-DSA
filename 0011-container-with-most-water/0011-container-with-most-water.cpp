class Solution {
public:
    int maxArea(vector<int>& height) {
      int max_water=0;
       int l=0;
        int r=height.size()-1;
       int hl=0,hr=0;
        while (l<r){
            hl=height[l];
            hr=height[r];
            max_water=max(max_water,min(hl,hr)*(r-l));
            if (hl>= hr){
                r-=1;
                    }
            else{
            if (hr>= hl)
                l+=1;
                }
            }
        return max_water;  
    }
};