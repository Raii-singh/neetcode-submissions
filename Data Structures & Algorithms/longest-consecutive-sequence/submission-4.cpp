class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> st(nums.begin(), nums.end());

        int ans = 1;

        for(int x: nums){
            if(st.find(x -1) == st.end()){
                int curr = x;
                int count = 1;

                while(st.find(curr + 1) != st.end()){
                    count++;
                    curr++;
                }
                ans = max(ans, count); 
            }
        }
        return ans;
    }
};
