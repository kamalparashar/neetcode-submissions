class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums){
            if(mp[i] > 0){
                return true;
            }
            mp[i]++;
        }

        // for(auto m:mp){
        //     if(m.second > 1){
        //         return true;
        //     }
        // }

        return false;
    }
};