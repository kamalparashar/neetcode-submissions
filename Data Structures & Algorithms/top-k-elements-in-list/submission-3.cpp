class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }

        // priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        // for(auto m:mp){
        //     pq.push({m.second,m.first});
        //     if(pq.size() > k){
        //         pq.pop();
        //     }
        // }
        
        int n = nums.size();
        vector<vector<int>> buckets(n+1);
        for(auto m:mp){
            buckets[m.second].push_back(m.first);
        }
        vector<int> ans;
        // while(!pq.empty()){
        //     ans.push_back(pq.top().second);
        //     pq.pop();
        // }

        for(int i = n; i >= 0 && ans.size() < k; i--){
            for(int num:buckets[i]){
                ans.push_back(num);
                if(ans.size() == k){
                    return ans;
                }
            }
        }
        return ans;
    }
};
