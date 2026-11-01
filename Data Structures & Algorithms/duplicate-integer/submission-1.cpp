class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // for(int i = 0; i < nums.size(); i++){
        //     for(int j = 0; j < nums.size(); j++){
        //         if(i != j && nums[i] == nums[j]) return true; 
        //     }
        // }
        // return false;
        unordered_map<int,int> mp;
        for(int x: nums){
            mp[x]++;

            if(mp[x] > 1) return true;
        }
        return false;

    }
};