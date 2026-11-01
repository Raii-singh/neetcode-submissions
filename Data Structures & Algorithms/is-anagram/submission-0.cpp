class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> mps;
        unordered_map<char, int> mpt;

        for(char x: s){
            mps[x]++;
        }
        for(char x: t){
            mpt[x]++;
        }

        return mps == mpt;
    }
};
