class Solution {
public:
    bool solve(int i, int j, vector<vector<char>>& board, int k, string word)
    {
        if(k == word.size())
            return true;
        
        if(i == board.size() || i == -1 || j == board[0].size() || j == -1 || board[i][j] != word[k])
            return false;
        
        char temp = board[i][j];
        board[i][j] = '!';
        
        bool ans = solve(i+1, j, board, k+1, word) || solve(i-1, j, board, k+1, word) || 
                   solve(i, j+1, board, k+1, word) || solve(i, j-1, board, k+1, word);
        
        board[i][j] = temp;
        
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[0].size(); j++)
            {
                if((board[i][j] == word[0]) && solve(i, j, board, 0, word))
                {
                    return true;
                }
            }
        }
        
        return false;
    }
};
