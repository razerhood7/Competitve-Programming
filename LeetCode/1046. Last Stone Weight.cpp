class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> q;
        
        for(int i=0; i<stones.size(); i++)
        {
            q.push(stones[i]);
        }    
        
        while(!q.empty())
        {
            if(q.size() == 1)
                return q.top();
            
            int y = q.top();
            q.pop();
            int x = q.top();
            q.pop();
            
            if(y != x)
                q.push(y-x);
        }
        
        return 0;
    }
};
