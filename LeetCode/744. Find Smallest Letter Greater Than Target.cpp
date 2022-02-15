class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int n = letters.size();
        int start = 0;
        int end = n-1;
        int mid;
        char ans = letters[0];
        while(start <= end)
        {
            mid = start + (end-start)/2;
            
            int val = letters[mid] - 'a';
            if(val > target - 'a')
            {
                ans = letters[mid];
                end = mid - 1;
            }
            else start = mid + 1;
        }
        return ans;
    }
};
