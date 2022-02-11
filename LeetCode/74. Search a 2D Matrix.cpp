class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lo=0;
        if(!matrix.size())
        {
            return false;
        }
        
        int high=(matrix.size() * matrix[0].size())-1;
        while(lo<=high)
        {
            int mid=(lo+(high-lo)/2);
            if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]==target)
            {
                return true;
            }
            
            if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]<target)
            {
                lo=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return false;
    }
};
