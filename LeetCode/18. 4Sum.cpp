class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> res;
        int n=nums.size();
        if(nums.size()==0)
            return res;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
            int target3=target-nums[i];
            
            for(int j=i+1;j<n;j++)
            {
                int target2=target3-nums[j];
                
                int front = j+1;
                int back=n-1;
                
                while(front<back)
                {
                    int twosum=nums[front]+nums[back];
                    
                    if(twosum<target2)
                        front++;
                    else if(twosum>target2)
                        back--;
                    else
                    {
                        vector<int> quadr(4,0);
                        quadr[0]=nums[i];
                        quadr[1]=nums[j];
                        quadr[2]=nums[front];
                        quadr[3]=nums[back];
                        
                        res.push_back(quadr);
                        
                        while (front < back && nums[front] == quadr[2]) ++front;
                        while (front < back && nums[back] == quadr[3]) --back;
                    }
                }
                
                while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
            }
                while (i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
        
        return res;
    }
};
