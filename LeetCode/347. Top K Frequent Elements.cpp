class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        int n = nums.size();
        unordered_map<int,int> mp;
        
        for(int i=0; i<n ;i++)
        {
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> hp;
        
        for(auto j:mp)
        {
            hp.push(make_pair(j.second, j.first));
            
            if(hp.size() > k)
                hp.pop();
        }
        
        while(hp.size()>0)
        {
            ans.push_back(hp.top().second);
            hp.pop();
        }
        
        return ans;
    }
};
