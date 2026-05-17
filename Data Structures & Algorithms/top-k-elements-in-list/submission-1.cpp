class Solution {
public:
struct Compare {
    bool operator()(const pair<int,int>& a, const pair<int,int>& b) {
        return a.second < b.second; 
    }
};
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> ans;
        priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> pq;
        for(int i:nums){
            mp[i]++;
        }

        for(auto m:mp){
            pq.push({m.first,m.second});
        }

        while(k--){
            pair<int,int> temp = pq.top();
            pq.pop();
            ans.push_back(temp.first);
        }

        return ans;
    }
};
