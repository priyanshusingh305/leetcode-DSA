class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       map<int,int> set;
for(int i:nums){
if(set.count(i))
return true;
set[i]++;
}
return false;
 
    }
};