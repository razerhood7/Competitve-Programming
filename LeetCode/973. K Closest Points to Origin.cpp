class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int, vector<int>>> q;
        vector<vector<int>> ans;
        
        for(int i=0; i<points.size(); i++)
        {
            int sum = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            q.push({sum, points[i]});
            if(q.size() >k)
            {
                q.pop();
            }
        }
                   
        while(!q.empty())
        {
            ans.push_back(q.top().second);
            q.pop();
        }
                   return ans;
    }
};
