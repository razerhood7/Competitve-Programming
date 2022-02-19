class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        set<int> result_set;
        vector<int> ans;
        int count = 0;
        
        for(int i=0;i<arr.size();i++)
        {
            result_set.insert(arr[i]);
        }
        
        int target = result_set.size();
        unordered_map<int,int> mp;
        
        for(int i=0; i<arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> hp;
        
        for(auto i:mp)
        {
            hp.push(make_pair(i.second,i.first));
            
            if(hp.size() > target)
                hp.pop();
        }
        
        cout<<hp.size();
        
        while(hp.size() > 0)
        {
            ans.push_back(hp.top().first);
            hp.pop();
        }
        
        int size_nums = arr.size()/2;
        int temp=0;
        for(int i=ans.size()-1; i>=0; i--)
        {
            temp += ans[i];
            if(temp >= size_nums)
            {
                count++;
                break;
            }  
            
            else 
                count++;
        }
        
        return count;
            
            
    }
};
